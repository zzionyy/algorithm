#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int fix;
    while (1) {
        int arr[3];

        cin >> arr[0] >> arr[1] >> arr[2];

        if (!arr[0]) break;

        sort(arr, arr + 3);

        int c = pow(arr[2], 2);
        int a = pow(arr[1], 2);
        int b = pow(arr[0], 2);

        if (a + b == c) {
            cout << "right\n";
        } else {
            cout << "wrong\n";
        }
    }

    return 0;
}
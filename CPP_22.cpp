#include <iostream>
using namespace std;

int filter_integers(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (!isdigit(arr[i])) {
            return -1;
        }
    }
    return 1;
}

bool issame(int a[], int b[], int n) {
    bool same = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            same = false;
            break;
        }
    }
    return same;
}

int main() {
    int n, arr[10];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (filter_integers(arr, n) == 1) {
        assert(issame(arr, arr, n));
    }
    return 0;
}
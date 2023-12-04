```
#include <iostream>
using namespace std;

bool issame(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);

    if (issame(a, b, n)) {
        cout << "The two arrays are the same." << endl;
    } else {
        cout << "The two arrays are not the same." << endl;
    }

    return 0;
}
```
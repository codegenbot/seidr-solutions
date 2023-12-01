#include <string>

bool cycpattern_check(string a, string b) {
    int n = a.length();
    int m = b.length();

    if (m > n) {
        return false;
    }

    for (int i = 0; i < n; i++) {
        bool isRotation = true;

        for (int j = 0; j < m; j++) {
            if (a[(i + j) % n] != b[j]) {
                isRotation = false;
                break;
            }
        }

        if (isRotation) {
            return true;
        }
    }

    return false;
}
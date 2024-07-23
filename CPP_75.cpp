#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= 100; ++i) {
        int multiple = 1;
        for (int j = 2; j <= 100; ++j) {
            if (j == i) continue;
            for (int k = 2; k <= 100; ++k) {
                if (k == j) continue;
                multiple *= j;
                if (multiple > a) break;
                if (is_prime(multiple)) return true;
            }
        }
    }
    return false;
}

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
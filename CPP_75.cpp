#include <cmath>

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); ++i) {
        if (is_prime(i)) {
            for (int j = i; j <= sqrt(a / i); ++j) {
                if (is_prime(j) && a % (i * j) == 0) {
                    int k = a / (i * j);
                    if (is_prime(k) && k != i && k != j) {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
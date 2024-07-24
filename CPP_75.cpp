#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= 100; i++) {
        for (int j = i; j <= 100; j++) {
            int k = ceil(sqrt(a / (i * j)));
            if (k * k * i * j == a && is_prime(i) && is_prime(j) && is_prime(k)) {
                return true;
            }
        }
    }
    return false;
}

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
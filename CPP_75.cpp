#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int product = 1;
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            for (int k = 2; k <= sqrt(a / i); k++) {
                if ((a / i) % k == 0 && is_multiply_prime(k)) {
                    return true;
                }
            }
        }
    }
    return false;
}
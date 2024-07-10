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
                product *= k;
                bool isPrimeK = true;
                for (int l = 2; l <= sqrt(k); l++) {
                    if (k % l == 0) {
                        isPrimeK = false;
                        break;
                    }
                }
                if (!isPrimeK) {
                    break;
                }
            }
        }
        if (product == a) {
            return true;
        }
    }
    return false;
}
#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int remainder = a % i;
        if (remainder == 0) {
            bool isPrime = true;
            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                int remainder2 = a / i;
                bool isPrime2 = true;
                for (int k = 2; k <= sqrt(remainder2); k++) {
                    if (remainder2 % k == 0) {
                        isPrime2 = false;
                        break;
                    }
                }
                if (isPrime2) {
                    int remainder3 = remainder2 / i;
                    bool isPrime3 = true;
                    for (int l = 2; l <= sqrt(remainder3); l++) {
                        if (remainder3 % l == 0) {
                            isPrime3 = false;
                            break;
                        }
                    }
                    if (isPrime3) return true;
                }
            }
        }
    }
    return false;
}
#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= 100; i++) {
        int count = 0;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                count++;
                while (i % j == 0) i /= j;
            }
        }
        if (count == 0 && a % i == 0) {
            int b = a / i;
            int c = i;
            bool is_prime_b = true;
            bool is_prime_c = true;

            for (int k = 2; k <= sqrt(b); k++) {
                if (b % k == 0) {
                    is_prime_b = false;
                    break;
                }
            }

            for (int k = 2; k <= sqrt(c); k++) {
                if (c % k == 0) {
                    is_prime_c = false;
                    break;
                }
            }

            if (is_prime_b && is_prime_c) return true;
        }
    }
    return false;
}
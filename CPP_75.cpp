#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= 100; ++i) {
        for (int j = i; j <= 100; ++j) {
            for (int k = j; k <= 100; ++k) {
                if (i * j * k == a) {
                    int prime = true;
                    for (int x = 2; x <= sqrt(a); ++x) {
                        if ((i % x == 0) || (j % x == 0) || (k % x == 0)) {
                            prime = false;
                            break;
                        }
                    }
                    return prime;
                }
            }
        }
    }
    return false;
}
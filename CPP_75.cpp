#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int temp = a;
        for (int j = 2; j <= i; j++) {
            if (temp % j == 0) {
                int k = temp / j;
                if (k <= i && is_prime(k)) {
                    for (int l = 2; l <= i; l++) {
                        if (k % l == 0 && l != k) {
                            int m = k / l;
                            if (m <= i && is_prime(m)) {
                                for (int n = 2; n <= i; n++) {
                                    if (m % n == 0 && n != m) {
                                        int o = m / n;
                                        if (o <= i && is_prime(o)) {
                                            return true;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    break;
                }
            }
        }
    }
    return false;
}

bool is_prime(int num) {
    if (num == 1 || num == 0)
        return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}
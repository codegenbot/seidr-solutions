#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            int j = 2;
            while (j * j <= a) {
                if (a % j == 0) {
                    return false;
                }
                j++;
            }
            for (int k = i; k <= sqrt(a); k++) {
                if (k * i > a) break;
                if (k * i == a || k * i % i != 0) {
                    int l = 2;
                    while (l * l <= k ? l * l : k) {
                        if ((l * l <= k ? l * l : k) % l == 0) {
                            return false;
                        }
                        l++;
                    }
                    return true;
                }
            }
        }
    }
    return false;
}
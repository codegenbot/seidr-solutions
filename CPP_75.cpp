#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int product = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                int k = j;
                while (i % k == 0) {
                    k++;
                }
                product *= k - 1;
            } else if (j > sqrt(i)) {
                product *= i;
                break;
            }
        }
        for (int j = 2; j <= sqrt(a / product); j++) {
            if ((a / product) % j == 0) {
                int k = j;
                while ((a / product) % k == 0) {
                    k++;
                }
                product *= k - 1;
            } else if (j > sqrt(a / product)) {
                for (int k = 2; k <= sqrt(product); k++) {
                    if (product % k == 0) {
                        int l = k;
                        while (product % l == 0) {
                            l++;
                        }
                        return false;
                    } else if (k > sqrt(product)) {
                        product *= i;
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
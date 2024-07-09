#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int product = 1;
        bool primeFound = false;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                product *= j;
                primeFound = true;
                break;
            }
        }
        if (!primeFound || product > a) continue;
        int k = sqrt(product);
        while (k * k <= product) {
            if (product % k == 0) {
                return false;
            }
            k--;
        }
        int mul = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                mul *= j;
                break;
            }
        }
        if (mul * product == a) return true;
    }
    return false;
}
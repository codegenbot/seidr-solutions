#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int temp = a;
        bool isPrime = true;
        for (int j = 2; j <= sqrt(temp); j++) {
            if (temp % j == 0) {
                isPrime = false;
                break;
            }
            temp /= i;
        }
        if (isPrime && temp > 1) {
            bool isPrime2 = true;
            for (int k = 2; k <= sqrt(temp); k++) {
                if (temp % k == 0) {
                    isPrime2 = false;
                    break;
                }
                temp /= k;
            }
            if (isPrime2 && temp > 1) {
                bool isPrime3 = true;
                for (int l = 2; l <= sqrt(temp); l++) {
                    if (temp % l == 0) {
                        isPrime3 = false;
                        break;
                    }
                    temp /= l;
                }
                if (isPrime3) return true;
            }
        }
    }
    return false;
}
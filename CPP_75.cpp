#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int temp = a;
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime && temp % i == 0) {
            int k = a / i;
            bool isPrime1 = true, isPrime2 = true;
            for (int j = 2; j <= sqrt(k); j++) {
                if (k % j == 0) {
                    isPrime1 = false;
                    break;
                }
            }
            temp /= i;
            for (int j = 2; j <= sqrt(temp); j++) {
                if (temp % j == 0) {
                    isPrime2 = false;
                    break;
                }
            }
            if (isPrime1 && isPrime2) return true;
        }
    }
    return false;
}
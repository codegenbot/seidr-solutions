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
        if (isPrime) {
            for (int k = 2; k <= sqrt(temp/i); k++) {
                if ((temp/i) % k == 0 && temp/i != k) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                int b = i;
                int c = temp / i;
                return a == b * c;
            }
        }
    }
    return false;
}
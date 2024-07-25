#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int temp = a;
        bool prime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            while (temp % i == 0) {
                temp /= i;
            }
            if (temp > 1) {
                for (int k = 2; k <= sqrt(temp); k++) {
                    if (temp % k == 0) {
                        return false;
                    }
                }
                return true;
            }
        }
    }
    return false;
}
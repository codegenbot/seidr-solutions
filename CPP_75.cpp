#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int remainder = a % i;
        if (remainder == 0) {
            int count = 0;
            for (int j = i; j <= a / i; j++) {
                if (a % j == 0) {
                    count++;
                }
            }
            if (count == 3) {
                return true;
            } else {
                break;
            }
        }
    }
    return false;
}
#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int remainder = a % i;
        if (remainder == 0) {
            int count = 0;
            for (int j = 2; j * i <= a; j++) {
                if (a % (j * i) == 0) {
                    count++;
                }
            }
            if (count >= 3) {
                return true;
            } else {
                break;
            }
        }
    }
    return false;
}
#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int temp = a;
        bool prime = true;
        while (temp > 1) {
            if (temp % i != 0) {
                break;
            }
            temp /= i;
        }
        if (temp == 1) {
            for (int j = 2; j <= sqrt(a); j++) {
                int temp2 = a;
                bool prime2 = true;
                while (temp2 > 1) {
                    if (temp2 % j != 0) {
                        break;
                    }
                    temp2 /= j;
                }
                if (temp2 == 1) {
                    for (int k = 2; k <= sqrt(a); k++) {
                        int temp3 = a;
                        bool prime3 = true;
                        while (temp3 > 1) {
                            if (temp3 % k != 0) {
                                break;
                            }
                            temp3 /= k;
                        }
                        if (temp3 == 1) {
                            return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}
Here is the completed code:

#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int count = 0;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0)
                count++;
        }
        if (count == 0) {
            for (int k = i; k <= a / i; k++) {
                int tempCount = 0;
                for (int l = 2; l <= k / 2; l++) {
                    if (k % l == 0)
                        tempCount++;
                }
                if (tempCount == 0) {
                    for (int m = k; m <= a / k; m++) {
                        int tempTempCount = 0;
                        for (int n = 2; n <= m / 2; n++) {
                            if (m % n == 0)
                                tempTempCount++;
                        }
                        if (tempTempCount == 0) {
                            return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}
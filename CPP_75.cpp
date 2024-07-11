#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int count = 0;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 0 && a != i) { 
            for (int k = i; k * i <= a; k++) {
                int count1 = 0;
                for (int l = 2; l <= k / 2; l++) {
                    if (k % l == 0) {
                        count1++;
                    }
                }
                if (count1 == 0 && k * i == a) { 
                    return true;
                }
            }
        }
    }
    return false;
}
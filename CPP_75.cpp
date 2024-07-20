#include <cmath>

using namespace std;

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int count = 0;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0)
                count++;
        }
        if (count == 0) {
            for (int k = 2; k <= sqrt(a / i); k++) {
                int temp = i * k;
                count = 0;
                for (int j = 2; j <= sqrt(temp); j++) {
                    if (temp % j == 0)
                        count++;
                }
                if (count == 0 && temp * i == a) {
                    return true;
                }
            }
        }
    }
    return false;
}
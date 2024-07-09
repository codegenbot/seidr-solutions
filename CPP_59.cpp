#include <cmath>

int largest_prime_factor(int n) {
    int max = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            if (i > max)
                max = i;
        }
    }
    return n > 1 ? n : max;
}
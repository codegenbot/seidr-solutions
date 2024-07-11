#include <cmath>

int largest_prime_factor(int n) {
    int maxFactor = 1;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            if (i > maxFactor)
                maxFactor = i;
        }
    }
    return maxFactor;
}
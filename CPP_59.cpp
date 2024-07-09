#include <cmath>

int largest_prime_factor(int n) {
    int maxPrime = 1;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    if (n > 1)
        maxPrime = n;
    return maxPrime;
}
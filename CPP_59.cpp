#include <cmath>

int largest_prime_factor(int n) {
    int largest_factor = 1;

    // Remove the factors of 2
    while (n % 2 == 0) {
        largest_factor = 2;
        n /= 2;
    }

    // Remove the odd factors
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largest_factor = i;
            n /= i;
        }
    }

    // If n is still greater than 2, then it must be prime
    if (n > 2) {
        largest_factor = n;
    }

    return largest_factor;
}
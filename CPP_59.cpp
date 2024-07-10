#include <iostream>

long long largest_prime_factor(long long n) {
    long long factor = 2;
    long long largest_factor = 1;
    while (factor * factor <= n) {
        if (n % factor == 0) {
            n /= factor;
            largest_factor = factor;
            while (n % factor == 0) {
                n /= factor;
            }
        }
        else {
            factor++;
        }
    }
    if (n > 1 && n > largest_factor) {
        largest_factor = n;
    }
    return largest_factor;
}
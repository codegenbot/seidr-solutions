#include <cassert>

long long largest_prime_factor(long long n) {
    long long factor = 2;
    while (n > factor) {
        if (n % factor == 0) {
            n /= factor;
        } else {
            factor++;
        }
    }
    return factor;
}
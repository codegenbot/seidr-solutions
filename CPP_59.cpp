#include <cassert>

int largest_prime_factor(int n) {
    int factor = 2;
    while (n > factor) {
        if (n % factor == 0) {
            n /= factor;
        } else {
            factor++;
        }
    }
    return factor;
}

int main() {
    assert(largest_prime_factor(13195) == 29);
    assert(largest_prime_factor(600851475143) == 6857);
    return 0;
}
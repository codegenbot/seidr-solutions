#include <assert.h>

int largest_prime_factor(int n) {
    int factor = 2;
    while (factor * factor <= n) {
        if (n % factor == 0) {
            n /= factor;
        } else {
            factor++;
        }
    }
    return n;
}

int main() {
    assert(largest_prime_factor(13195) == 29);
    return 0;
}
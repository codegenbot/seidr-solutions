#include <iostream>
#include <cmath>
#include <cassert>

int largest_prime_factor(int n) {
    int maxPrime = -1;
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    if (n > 2) {
        maxPrime = n;
    }
    return maxPrime;
}

int main() {
    assert(largest_prime_factor(13195) == 29);
    return 0;
}
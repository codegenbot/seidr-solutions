#include <cmath>

int largest_prime_factor(int n){
    int factor = 2;
    while (factor <= sqrt(n)) {
        if (n % factor == 0) {
            n /= factor;
        } else {
            factor++;
        }
    }
    return n;
}
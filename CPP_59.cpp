#include <iostream>
#include <cassert>

int largest_prime_factor(int n) {
    int i = 2;
    while (i * i <= n) { 
        if (n % i == 0) { 
            n /= i; 
        } else { 
            i++; 
        } 
    }
    return n;
}

int main() {
    assert(largest_prime_factor(13195) == 29);
    return 0;
}
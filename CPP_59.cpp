#include <iostream>
#include <cmath>

int largest_prime_factor(int n) {
    int largest_factor = 2;
    
    while (n % 2 == 0) {
        n /= 2;
    }
    
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largest_factor = i;
            n /= i;
        }
    }
    
    if (n > 2) {
        largest_factor = n;
    }
    
    return largest_factor;
}
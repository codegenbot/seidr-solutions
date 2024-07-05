#include <cmath>

int largest_prime_factor(int n) {
    int largest = -1;
    
    // Divide by 2 until n is odd
    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }
    
    // Check for odd factors from 3 onwards
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }
    
    // If n is still greater than 2, then n is prime
    if (n > 2) {
        largest = n;
    }
    
    return largest;
}
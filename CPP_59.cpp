#include <cmath>

int largest_prime_factor(int n) {
    int largestFactor = 0;
    
    // Check if n is divisible by 2
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }
    
    // Check for odd factors up to the square root of n
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }
    
    // If n is a prime number greater than 2
    if (n > 2) {
        largestFactor = n;
    }
    
    return largestFactor;
}
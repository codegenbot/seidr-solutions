#include <iostream>
using namespace std;

int largest_prime_factor(int n) {
    int largestFactor = 2;
    
    while (n % 2 == 0) {
        n /= 2;
    }
    
    for (int i = 3; i <= n; i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }
    
    return largestFactor;
}
#include <iostream>
using namespace std;

int largest_prime_factor(int n) {
    int largestFactor = 0;
    
    // Divide n by 2 until it is no longer divisible by 2
    while (n % 2 == 0) {
        largestFactor = 2;
        n = n / 2;
    }
    
    // Check for prime factors starting from 3
    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            largestFactor = i;
            n = n / i;
        }
    }
    
    // If n is still greater than 2, it is a prime factor
    if (n > 2) {
        largestFactor = n;
    }
    
    return largestFactor;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int largestPrimeFactor = largest_prime_factor(n);
    
    cout << "Largest prime factor: " << largestPrimeFactor << endl;
    
    return 0;
}
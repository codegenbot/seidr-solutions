#include <iostream>
using namespace std;

int largest_prime_factor(int n) {
    int largestFactor = 0;
    
    // Divide n by 2 until it is no longer divisible by 2
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }
    
    // Check for prime factors starting from 3
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }
    
    // If n is prime, it is the largest prime factor
    if (n > 2) {
        largestFactor = n;
    }
    
    return largestFactor;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int result = largest_prime_factor(n);
    cout << "Largest prime factor: " << result << endl;
    
    return 0;
}
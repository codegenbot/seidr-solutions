#include <iostream>
using namespace std;

int largest_prime_factor(int n) {
    int max_prime = -1;
    
    // Handle even numbers first
    while (n % 2 == 0) {
        max_prime = 2;
        n /= 2;
    }
    
    // Handle odd factors
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            max_prime = i;
            n /= i;
        }
    }
    
    // If the remaining n is a prime number greater than 2
    if (n > 2)
        max_prime = n;
    
    return max_prime;
}

int main() {
    int n;
    cin >> n;
    cout << largest_prime_factor(n) << endl;
    return 0;
}
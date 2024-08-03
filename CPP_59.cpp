#include <iostream>
#include <cmath>

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
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    int result = largest_prime_factor(number);
    std::cout << "Largest prime factor: " << result << std::endl;

    return 0;
}
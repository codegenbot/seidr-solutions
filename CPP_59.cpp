#include <iostream>
#include <cmath>

int largest_prime_factor(int n) {
    int largestPrime = 2;
  
    while (n % 2 == 0) {
        n /= 2;
    }
  
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largestPrime = i;
            n /= i;
        }
    }
  
    if (n > 2) {
        largestPrime = n;
    }
  
    return largestPrime;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
  
    int result = largest_prime_factor(n);
    std::cout << "Largest prime factor: " << result << std::endl;
  
    return 0;
}
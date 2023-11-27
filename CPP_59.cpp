#include <iostream>

int largest_prime_factor(int n) {
    int largestPrime = 2;
    while (n % 2 == 0) {
        n = n / 2;
    }
    for (int i = 3; i <= n; i = i + 2) {
        while (n % i == 0) {
            largestPrime = i;
            n = n / i;
        }
    }
    return largestPrime;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Largest prime factor: " << largest_prime_factor(n) << std::endl;
    return 0;
}
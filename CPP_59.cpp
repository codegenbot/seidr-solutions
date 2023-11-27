#include <iostream>

int largest_prime_factor(int n) {
    int largestFactor = 0;
    while (n % 2 == 0) {
        largestFactor = 2;
        n = n / 2;
    }
    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            largestFactor = i;
            n = n / i;
        }
    }
    if (n > 2) {
        largestFactor = n;
    }
    return largestFactor;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Largest prime factor: " << largest_prime_factor(n) << std::endl;
    return 0;
}
#include <iostream>

int largest_prime_factor(int n) {
    int largestFactor = 2;
    while (n > largestFactor) {
        if (n % largestFactor == 0) {
            n /= largestFactor;
        } else {
            largestFactor++;
        }
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
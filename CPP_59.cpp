#include <iostream>
#include <cassert>

int largest_prime_factor(int n) {
    int factor = 2;
    while (n > factor) {
        if (n % factor == 0) {
            n /= factor;
        } else {
            factor++;
        }
    }
    return factor;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    if (!(std::cin >> n) || n <= 0) {
        std::cerr << "Invalid input. Please enter a positive integer.\n";
        return 1;
    }

    std::cout << "Largest prime factor: " << largest_prime_factor(n) << std::endl;

    return 0;
}
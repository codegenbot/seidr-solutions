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
    std::cout << largest_prime_factor(13195) << std::endl;
    std::cout << largest_prime_factor(2048) << std::endl;
    return 0;
}
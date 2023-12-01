#include <iostream>

int largest_prime_factor(int n) {
    int largestFactor = 2;
    while (n % 2 == 0) {
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }
    if (n > 2) {
        largestFactor = n;
    }
    return largestFactor;
}

int main() {
    std::cout << largest_prime_factor(13195) << std::endl;
    std::cout << largest_prime_factor(2048) << std::endl;
    return 0;
}
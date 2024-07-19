#include <iostream>
// Function to check if a number is prime or not
bool is_prime(int n) {
    // Check all numbers from 2 to sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    if (!is_prime(n)) {
        std::cout << "The number is not prime." << std::endl;
    } else {
        std::cout << "The number is prime." << std::endl;
    }
    return 0;
}
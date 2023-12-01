#include <iostream>

int largest_prime_factor(int n) {
    int largest = 0;
    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }
    if (n > 2) {
        largest = n;
    }
    return largest;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Largest prime factor: " << largest_prime_factor(n) << std::endl;
    return 0;
}
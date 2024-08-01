#include <iostream>

int largest_prime_factor(int n) {
    int factor = 2;
    while (n > 1) {
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
    std::cout << "Enter a number greater than 1 that is not a prime: ";
    std::cin >> n;
    
    int result = largest_prime_factor(n);
    std::cout << "Largest prime factor of " << n << " is: " << result << std::endl;
    
    return 0;
}
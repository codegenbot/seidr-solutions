#include <iostream>

int largest_prime_factor(int n) {
    int largest_prime = 2;
    
    while (n % 2 == 0) {
        n /= 2;
    }
    
    for (int i = 3; i <= n; i += 2) {
        while (n % i == 0) {
            largest_prime = i;
            n /= i;
        }
    }
    
    return largest_prime;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    int result = largest_prime_factor(n);
    std::cout << "Largest prime factor: " << result << std::endl;
    
    return 0;
}
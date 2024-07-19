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
    std::cin >> n;
    std::cout << largest_prime_factor(n) << std::endl;
    return 0;
}
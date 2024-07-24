#include <iostream>
#include <cassert>

bool is_prime(int n) {
    // Implement prime checking logic
}

bool is_multiply_prime(int n) {
    // Implement logic to check if a number is a product of prime numbers
}

int main() {
    int num;
    std::cout << "Enter a number less than 100: ";
    std::cin >> num;

    std::cout << (is_multiply_prime(num) ? "true" : "false") << std::endl;

    assert(is_multiply_prime(11 * 13 * 7) == true);

    return 0;
}
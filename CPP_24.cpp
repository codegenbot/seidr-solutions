#include <iostream>
#include <cassert>

int largest_divisor(int n) {
    for (int i = n / 2; i >= 1; --i) {
        if (n % i == 0) {
            return i;
        }
    }
    return 1;
}

int main() {
    assert(largest_divisor(49) == 7);
    std::cout << "Test passed!" << std::endl;

    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Largest divisor of " << n << " is: " << largest_divisor(n) << std::endl;

    return 0;
}
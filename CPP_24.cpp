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
    // Sample assertions to test the function
    assert(largest_divisor(49) == 7);
    assert(largest_divisor(21) == 7);
    assert(largest_divisor(15) == 5);

    // Additional test code, e.g.:
    std::cout << "Enter a number: ";
    int n;
    std::cin >> n;
    std::cout << "Largest divisor of " << n << " is " << largest_divisor(n) << "\n";

    return 0;
}
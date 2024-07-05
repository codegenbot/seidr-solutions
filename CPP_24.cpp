#include <cassert>
#include <iostream>

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
    assert(largest_divisor(100) == 50);
    assert(largest_divisor(17) == 1);
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "The largest divisor of " << n << " is " << largest_divisor(n) << std::endl;
    return 0;
}
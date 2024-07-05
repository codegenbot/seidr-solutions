#include <iostream>
#include <cassert>

int largest_divisor(int n) {
    for (int i = n / 2; i > 0; --i) {
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
    assert(largest_divisor(81) == 27);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
#include <iostream>
#include <cassert>

int largest_divisor(int n) {
    for (int i = n / 2; i > 0; --i) {
        if (n % i == 0) {
            return i;
        }
    }
    return 1; // This line is never reached due to the problem constraints
}

int main() {
    assert(largest_divisor(49) == 7);
    std::cout << "All test cases passed.\n";
    return 0;
}
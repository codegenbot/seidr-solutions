#include <iostream>
#include <cassert>

// Function to find the largest divisor of n (greater than 1)
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
    std::cout << "Test passed!" << std::endl;
    return 0;
}
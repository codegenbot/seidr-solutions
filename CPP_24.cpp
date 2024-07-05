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
    // Additional test cases can be added here
    return 0;
}
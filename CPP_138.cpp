#include <iostream>
#include <cassert>

bool is_equal_to_sum_even(int n) {
    int sum = 0;
    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            sum += digit;
        }
        n /= 10;
    }
    return (sum % 8 == 0);
}

int main() {
    assert(is_equal_to_sum_even(16) == true);
    return 0;
}
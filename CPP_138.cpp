#include <iostream>
#include <cassert>

bool is_equal_to_sum_even(int n) {
    return n % 2 == 0 && n >= 8;
}

int main() {
    assert(is_equal_to_sum_even(16) == true);
    
    return 0;
}
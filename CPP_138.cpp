#include <iostream>
#include <cassert>

bool is_equal_to_sum_even(unsigned int n) {
    return (n % 2 == 0 && n >= 4);
}

int main() {
    assert(is_equal_to_sum_even(16) == true);
    assert(is_equal_to_sum_even(5) == false);
    
    return 0;
}
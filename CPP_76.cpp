#include <iostream>
#include <cmath>
#include <cassert>

int main() {
    assert(is_simple_power(1, 12) == true);
    assert(is_simple_power(16, 2) == true);
    assert(is_simple_power(27, 3) == true);
    assert(is_simple_power(10, 2) == false);
    
    std::cout << "All tests passed successfully." << std::endl;
    
    return 0;
}
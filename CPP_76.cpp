#include <iostream>
#include <cassert>
#include <cmath>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    double result = std::log(x) / std::log(n);
    return (result == static_cast<int>(result));
}

int main() {
    assert(is_simple_power(1, 12) == true);
    assert(is_simple_power(16, 2) == true);
    assert(is_simple_power(81, 3) == true);
    assert(is_simple_power(125, 5) == true);
    assert(is_simple_power(27, 3) == true);
    assert(is_simple_power(7, 2) == false);
    
    return 0;
}
#include <iostream>
#include <cassert>
#include <cmath>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    
    double root = std::pow(x, 1.0 / n);
    
    return (std::pow(static_cast<int>(root), n) == x);
}

int main(){
    assert(is_simple_power(1, 12) == true);
    assert(is_simple_power(16, 4) == true);
    assert(is_simple_power(81, 3) == true);
    assert(is_simple_power(7, 2) == false);
    assert(is_simple_power(0, 5) == false);
    assert(is_simple_power(25, 0) == false);
    
    return 0;
}
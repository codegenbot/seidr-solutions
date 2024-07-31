#include <iostream>
#include <cmath>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    
    double result = log(x) / log(n);
    
    return std::abs(result - (int)result) < 1e-9;
}

int main() {
    assert(is_simple_power(1, 12));
    
    return 0;
}
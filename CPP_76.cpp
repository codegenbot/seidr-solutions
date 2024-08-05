#include <iostream>
#include <cmath>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    
    double result = std::log(static_cast<double>(x)) / std::log(static_cast<double>(n));
    return (result == static_cast<int>(result));
}

int main() {
    assert (is_simple_power(1, 12)==true);
    return 0;
}
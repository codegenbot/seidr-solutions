#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    
    double power = std::log(x) / std::log(n);
    
    return (power == int(power));
}

int main() {
    assert(is_simple_power(16, 2) == true);
    assert(is_simple_power(27, 3) == true);
    assert(is_simple_power(10, 3) == false);
    
    return 0;
}
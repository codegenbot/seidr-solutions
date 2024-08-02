#include <cassert>
#include <cmath>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    
    double power = std::log(x) / std::log(n);
    
    return (power == int(power));
}

int main() {
    assert(is_simple_power(27, 3) == true);
    assert(is_simple_power(16, 4) == true);
    assert(is_simple_power(10, 5) == false);
    
    return 0;
}
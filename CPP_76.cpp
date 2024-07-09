#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    assert(n > 0);

    if (x <= 0 || n <= 0) {
        return false;
    }
    
    double result = pow(x, 1.0 / n);
    return result == int(result);
}
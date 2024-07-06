#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    
    for (int i = 2; i * i <= x; ++i) {
        double temp = pow(i, 1.0 / log2(x));
        if (std::round(temp) == n) {
            return true;
        }
    }
    
    return false;
}
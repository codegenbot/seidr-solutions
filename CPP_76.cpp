#include <cmath>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    
    double result = log(x) / log(static_cast<double>(n));
    return result == static_cast<int>(result);
}
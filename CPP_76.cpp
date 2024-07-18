#include <cmath>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    double result = std::log(x) / std::log(n);
    return (result == static_cast<int>(result));
}
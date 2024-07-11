```cpp
#include <cmath>
#include <cfloat>

bool is_simple_power(int x, int n) {
    double log_x = std::log(x);
    double log_n = std::log(n);
    
    return (std::abs(log_x / log_n) - static_cast<int>(log_x / log_n)) <= DBL_EPSILON;
}
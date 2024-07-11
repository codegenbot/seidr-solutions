```cpp
#include <cmath>

bool is_simple_power(int x, int n) {
    double log_x = log(static_cast<double>(x));
    double log_n = log(static_cast<double>(n));

    return (log_x / log_n) == std::round(log_x / log_n);
}
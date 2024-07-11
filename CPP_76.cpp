#include <cmath>
#include <cfloat>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0)
        return false;

    double log_x = std::log((double)x);
    double log_n = std::log((double)n);

    return std::fmod(log_x, log_n) == 0;
}
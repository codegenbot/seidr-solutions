#include <cmath>

bool is_simple_power(int x, int n) {
    double log_x = std::log((double)x);
    double log_n = std::log((double)n);
    
    return (std::fmod(log_x, log_n) == 0);
}
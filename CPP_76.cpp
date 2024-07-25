#include <cmath>

bool is_simple_power(int x, int n) {
    double log_value = log((double)x) / log((double)n);
    return floor(log_value + 0.5) == log_value;
}
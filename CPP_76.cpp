#include <cmath>

bool is_simple_power(int x, int n) {
    double log_val = log((double)x) / log((double)n);
    return floor(log_val + 0.5) == log_val;
}
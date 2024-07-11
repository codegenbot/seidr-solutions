#include <cmath>

bool is_simple_power(int x, int n) {
    double log_x = log((double)x);
    double log_n = log((double)n);
    
    return (log_x / log_n) == round(log_x / log_n);
}
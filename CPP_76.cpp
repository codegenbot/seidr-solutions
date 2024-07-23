#include <cmath>

bool is_simple_power(int x, int n){
    if (x <= 0) {
        return false;
    }
    if (n < 2) {
        return false;
    }
    double log_x = log(x);
    double log_n = log(n);
    
    return std::floor(log_x / log_n) == log_x / log_n && pow(n, log_x / log_n) == x;
}
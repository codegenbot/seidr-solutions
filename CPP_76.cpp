#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    double log_value = log((double)x) / log((double)n);
    return floor(log_value + 0.5) == log_value;
}

int main() {
    assert(is_simple_power(1, 12)==true);
    return 0;
}
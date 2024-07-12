#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    double log_x = log((double)x);
    double log_n = log((double)n);

    if (fmod(log_x, log_n) == 0)
        return true;
    else
        return false;
}

int main() {
    assert(is_simple_power(1, 12)==true);
    // add more test cases here...
    return 0;
}
#include <iostream>
#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    if (x == 1) {
        return true;
    }
    double power = log(x) / log(x);
    return (power == int(power));
}

int main() {
    assert(is_simple_power(1, 12)==true);
    
    return 0;
}
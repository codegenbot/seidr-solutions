```cpp
#include <cmath>
#include <iostream>
#include <cassert>

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == x);
}

assert(is_simple_power(1, 12) == true);
assert(is_simple_power(4, 2) == false);
assert(is_simple_power(8, 3) == true);
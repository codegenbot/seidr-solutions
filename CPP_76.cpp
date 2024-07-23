```cpp
#include <cmath>

bool is_simple_power(int x) {
    for (int n = 1; n <= sqrt(x); n++) {
        double y = pow(n, ceil(log2(x)/log2(n)));
        if (y == x) return true;
    }
    return false;
}
#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    if(x == 1)
        return true;
    double y = pow(n, 1.0 / log2(x));
    return ceil(y) == floor(y);
}

int main() {
    assert(is_simple_power(1, 12) == true);
    return 0;
}
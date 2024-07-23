#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    double y = pow(n, ceil(log2(x)));
    return y == x;
}

int main() {
    assert (is_simple_power(1, 12)==true);
    // Add more test cases as needed
    return 0;
}
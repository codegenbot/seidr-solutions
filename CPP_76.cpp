#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == x);
}

int main() {
    assert(is_simple_power(1, 12)==true);
    // Add more tests as needed
    return 0;
}
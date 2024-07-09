#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    return (int)pow(n, log(x) / log(n)) == x;
}

int main() {
    assert(is_simple_power(1, 12)==true);
    return 0;
}
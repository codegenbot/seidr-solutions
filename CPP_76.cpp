```
#include <bits/stdc++.h>

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == x);
}

int main() {
    assert(is_simple_power(1, 12) == true);
    assert(is_simple_power(4, 2) == false);
    assert(is_simple_power(8, 3) == true);
    return 0;
}
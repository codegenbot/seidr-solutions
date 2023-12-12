```
#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    return std::pow(n, round(log(x) / log(n))) == x;
}

int main() {
    assert(is_simple_power(1, 4) == true);
    assert(is_simple_power(2, 2) == true);
    assert(is_simple_power(8, 2) == false);
    assert(is_simple_power(3, 2) == false);
    assert(is_simple_power(3, 1) == true);
    assert(is_simple_power(5, 3) == false);
    return 0;
}
```
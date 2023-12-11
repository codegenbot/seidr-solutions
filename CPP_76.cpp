```cpp
#include <iostream>
#include <cmath>

bool is_simple_power(int x, int n) {
    double x_d = static_cast<double>(x);
    double n_d = static_cast<double>(n);
    return (x_d == pow(n_d, round(log(x_d) / log(n_d))));
}

int main() {
    assert (is_simple_power(1, 4)==true);
    assert (is_simple_power(2, 2)==false);
    assert (is_simple_power(8, 2)==true);
    assert (is_simple_power(3, 2)==false);
    assert (is_simple_power(3, 1)==false);
    assert (is_simple_power(5, 3)==false);
}
```
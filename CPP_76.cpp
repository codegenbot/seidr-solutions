```
#include <iostream>
#include <cmath>

std::string is_simple_power(const std::string& x, const std::string& n) {
    double x_d = stod(x);
    double n_d = stod(n);
    return std::to_string(x_d == pow(n_d, round(log(x_d) / log(n_d))));
}

int main() {
    assert (is_simple_power("1", "12") == true); // Pass strings instead of integers
    assert (is_simple_power("2", "2") == true);
    assert (is_simple_power("8", "2") == false);
    assert (is_simple_power("3", "2") == false);
    assert (is_simple_power("3", "1") == false);
    assert (is_simple_power("5", "3") == true);
}
```
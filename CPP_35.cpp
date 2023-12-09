```
#include <iostream>
#include <array>
#include <algorithm>
#include <cmath>

int main() {
    std::array<float, 3> v = {1, 2, 3};
    assert (abs(std::max_element(v.begin(), v.end()) - 124) < 1e-4);
    return 0;
}

int main2() {
    std::array<float, 3> v = {1, 2, 3};
    assert (abs(std::max_element(v.begin(), v.end()) - 124) < 1e-4);
    return 0;
}
```
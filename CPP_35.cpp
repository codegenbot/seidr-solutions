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
```
The issue is caused by multiple definitions of the `main` function in the same scope, which is not allowed in C++. To fix this, simply remove one of the `main` functions or give them different names.
```cpp
#include <iostream>
#include <array>
#include <algorithm>
#include <cmath>
#include <cassert>

int main(const std::array<int, 3>& v) {
    assert(abs(std::max_element(v.begin(), v.end()) - 124) < 1e-4);
    return 0;
}
```
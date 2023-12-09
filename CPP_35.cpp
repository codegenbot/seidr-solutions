```
#include <iostream>
#include <array>
#include <algorithm>
#include <cmath>
#include <cassert>

int main() {
    std::array<int, 3> v = {1, 2, 3};
    auto it = std::find_if(v.begin(), v.end(), [](auto x) { return x > 0; });
    assert(it != v.end());
    *it = -*it;
    return 0;
}
```
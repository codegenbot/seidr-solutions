```cpp
#include <algorithm>
#include <vector>
#include <assert.h>
#include <initializer_list>

int maxVal = *std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});

int main() {
    assert(std::abs(std::maxVal-12)<1e-4);
    return 0;
}
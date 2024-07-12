```cpp
#include <cassert>
#include <algorithm>
#include <cmath>

int main() {
    int numbers[] = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    return 0;
}
assert(std::abs(std::max_element(numbers)) - 12 < 1e-4);
```cpp
#include <algorithm>
#include <cmath>

int main() {
    int maxVal = *std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});
    return std::abs(maxVal- 124)<1e-4;
}
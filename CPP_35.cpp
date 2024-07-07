```cpp
#include <algorithm>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> v = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    long long maxVal = *std::max_element(v.begin(), v.end());
    assert(std::abs(maxVal) < 1e-4);
    return 0;
}
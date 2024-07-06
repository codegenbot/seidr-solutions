```cpp
#include <algorithm>
#include <vector>

int findMax(const std::vector<int>& l) {
    return *std::max_element(l.begin(), l.end());
}
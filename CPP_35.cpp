```cpp
#include <algorithm>
#include <vector>

int max_element(const std::vector<int>& l) {
    return *std::max_element(l.begin(), l.end());
}
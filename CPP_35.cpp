```cpp
#include <vector>
#include <algorithm>

int max_value(std::vector<int> l) {
    return *std::max_element(l.begin(), l.end());
}
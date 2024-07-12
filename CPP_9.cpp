```cpp
#include <algorithm>
bool operator()(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
};
```cpp
#include <vector>
#include <algorithm>
#include <initializer_list>

bool isSame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> order_by_points(std::vector<int> v) {
    std::sort(v.begin(), v.end());
    return v;
}
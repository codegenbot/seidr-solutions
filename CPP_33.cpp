```cpp
#include <vector>
#include <algorithm>

std::size_t issame(std::vector<int> a, std::vector<int> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

std::vector<int> sort_third(std::vector<int> v) {
    sort(v.begin(), v.end());
    for (int i = 1; i < v.size(); i += 2) {
        swap(v[i - 1], v[i]);
    }
    return v;
}
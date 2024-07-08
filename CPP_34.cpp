```cpp
#include <vector>
#include <set>

std::vector<int> unique(std::vector<int> l) {
    std::set<int> s(l.begin(), l.end());
    return std::vector<int>(s.begin(), s.end());
}

bool same(std::vector<std::vector<int>> l, std::vector<int> target) {
    for (auto v : l) {
        if (v == target)
            return true;
    }
    return false;
}
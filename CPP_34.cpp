```cpp
#include <set>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (std::find(b.begin(), b.end(), a[i]) == b.end()) return false;
    }
    return true;
}

int main() {
    std::vector<int> v = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::set<int> uniqueV(v.begin(), v.end());
    assert(issame(uniqueV, {0, 2, 3, 5, 9, 123}));
    return 0;
}
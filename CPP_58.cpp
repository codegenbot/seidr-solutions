```
#include <algorithm>
#include <vector>
#include <memory_resource>

bool issame(const std::pmr::vector<int>& a, const std::pmr::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::pmr::vector<int> common({4, 3, 2, 8});
    assert(issame(common, {}));
    return 0;
}
```
```
#include <algorithm>
#include <pmr/vector>

template<typename T>
bool issame(const std::pmr::vector<T>& a, const std::pmr::vector<T>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::pmr::vector<int> common({4, 3, 2, 8});
    assert(issame(common, {}));
    return 0;
}
```
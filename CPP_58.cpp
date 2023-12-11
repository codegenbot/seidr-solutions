```
#include <memory_resource>
#include <vector>

bool issame(const std::pmr::vector<int>& a, const std::pmr::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::pmr::vector<int> common;
    assert(issame(common({4, 3, 2, 8}, {}), {}));
}
```
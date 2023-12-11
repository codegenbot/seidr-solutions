```cpp
#include <algorithm>
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
    assert(issame(std::pmr::vector({4, 3, 2, 8}), std::pmr::vector<int>());
}
```
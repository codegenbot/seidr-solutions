```
#include <algorithm>
#include <vector>
#include <cstddef> // include this header file to define size_type

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); i++) { // use size_t instead of int
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> common({4, 3, 2, 8});
    assert(issame(common, {}));
}
```
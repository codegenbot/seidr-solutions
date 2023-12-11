```
#include <algorithm>
#include <boost/container/pmr/vector.hpp>

bool issame(const pmr::vector<int>& a, const pmr::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (std::initializer_list<int>::size_type i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    pmr::vector<int> common({4, 3, 2, 8});
    assert(issame(common, {}));
}
```
```
#include <iostream>
#include <algorithm>
#include <pmr/vector.hpp>

bool issame(const std::pmr::vector<int>& a, const std::pmr::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::pmr::vector<int> v1 = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    std::pmr::vector<int> v2 = {6, 3, 6, 3, 4, 4, 10, 1, 124};
    assert(issame(v1, v2));
    return 0;
}
```
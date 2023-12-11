```
#include <iostream>
#include <vector>
#include <memory_resource>

using size_type = std::size_t;

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::pmr::vector<int> common{4, 3, 2, 8};
    assert(issame(common, {4, 3, 2, 8}));
    return 0;
}
```
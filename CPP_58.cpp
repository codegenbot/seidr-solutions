```
#include <algorithm>
#include <vector>

using size_type = std::size_t;

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    auto common = std::vector{4, 3, 2, 8};
    assert([&]() { return issame(common, {}); }());
    return 0;
}
```
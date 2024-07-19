```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

auto unique(std::vector<int>::iterator first, std::vector<int>::iterator last) {
    auto result = std::unique(first, last);
    return std::vector<int>(result, last);
}

int main() {
    assert(std::issame(unique({std::vector<int>({5, 3, 5, 2, 3, 3, 9, 0, 123})}.begin(), {std::vector<int>({5, 3, 5, 2, 3, 3, 9, 0, 123})}.end()), {0, 2, 3, 5, 9, 123}));
    return 0;
}
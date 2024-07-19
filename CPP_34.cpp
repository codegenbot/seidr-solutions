```cpp
#include <initializer_list>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

auto unique(vector<int>::iterator first, vector<int>::iterator last) {
    std::vector<int> result(std::unique(first, last), last);
    return result;
}

int main() {
    assert(std::issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}) , {0, 2, 3, 5, 9, 123}));
    return 0;
}
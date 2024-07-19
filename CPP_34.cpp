```cpp
#include <iostream>
#include <algorithm>
#include <vector>

auto unique_copy(std::vector<int>::iterator first, std::vector<int>::iterator last) {
    return std::vector<int>(std::unique_copy(first, last));
}

bool isEqual(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(isEqual(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    return 0;
}
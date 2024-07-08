#include <algorithm>
#include <vector>
#include <iostream>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> v = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());
    assert(issame(v, std::vector<int>{0, 2, 3, 5, 9, 123}));

    return 0;
}
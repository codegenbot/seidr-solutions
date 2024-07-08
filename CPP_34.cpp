#include <algorithm>
#include <vector>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::is_permutation(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    auto v = std::vector<int>{5, 3, 5, 2, 3, 3, 9, 0, 123};
    assert(issame({5, 3, 5, 2, 3, 3, 9, 0, 123}, {2, 3, 5, 9, 123, 0}));

    return 0;
}
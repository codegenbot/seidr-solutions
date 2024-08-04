#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

int main() {
    assert(!issame({1, 2, 3}, {1, 2, 3, 4}));
}
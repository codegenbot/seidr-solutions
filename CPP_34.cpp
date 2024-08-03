#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

std::vector<int> unique(std::vector<int> vec) {
    std::sort(vec.begin(), vec.end());
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
    return vec;
}

int main() {
    assert(issame({5, 3, 5, 2, 3, 3, 9, 0, 123}, {0, 2, 3, 5, 9, 123}));
    assert(issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));

    return 0;
}
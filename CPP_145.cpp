#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame({0,6,6,-76,-21,23,4}, {-76, -21, 0, 4, 23, 6, 6}));
    assert(issame({2, 5, 1}, {5, 2, 1}));
    assert(!issame({1, 2, 3}, {3, 2, 1}));
    return 0;
}
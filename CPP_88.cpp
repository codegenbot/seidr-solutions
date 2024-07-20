#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::is_permutation(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame({21, 14, 23, 11}, {23, 21, 14, 11}));
    return 0;
}
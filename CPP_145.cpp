#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> a_sorted = a;
    std::vector<int> b_sorted = b;

    std::sort(a_sorted.begin(), a_sorted.end());
    std::sort(b_sorted.begin(), b_sorted.end());

    return std::is_permutation(a_sorted.begin(), a_sorted.end(), b_sorted.begin());
}

int main() {
    assert(issame({0, 6, 6, -76, -21, 23, 4}, {-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}
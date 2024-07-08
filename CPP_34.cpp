#include <algorithm>
#include <vector>
#include <iostream>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::is_permutation(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    std::vector<int> a = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::vector<int> b = {2, 3, 5, 9, 123, 0};

    assert(issame(a, b));

    return 0;
}
#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::std::vector<int>& a, const std::std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> tri(int n) {
    return {n, 3 * n};
}
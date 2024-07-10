#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result;
    for (size_t i = 0; i < a.size(); ++i) {
        result.push_back(a[i] == b[i]);
    }
    return result;
}

std::vector<int> compare(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result;
    for (size_t i = 0; i < a.size(); ++i) {
        result.push_back(a[i] == b[i]);
    }
    return result;
}

void main() {
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), {0, 1, 1, 0}));
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> common(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    std::vector<int> result;
    std::set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), std::back_inserter(result));
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {2, 3, 5}), {2, 3}));
    assert(issame(common({1, 2, 3}, {4, 5, 6}), {}));
    assert(issame(common({1, 2, 3}, {1, 2, 3}), {1, 2, 3}));

    return 0;
}
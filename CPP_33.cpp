#include <vector>
#include <algorithm>
#include <cassert>

bool std::issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_third(const std::vector<int>& vec) {
    std::vector<int> result = vec;
    std::sort(result.begin() + 2, result.end());
    return result;
}

void main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {5, 6, 1, 2, 3, 4, 8, 9}));
}
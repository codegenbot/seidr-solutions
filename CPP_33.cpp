#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_third(const std::vector<int>& vec) {
    std::vector<int> result = vec;
    std::sort(result.begin() + 2, result.begin() + 5);
    return result;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {5, 6, 2, 3, 4, 8, 9, 1}));
    return 0;
}
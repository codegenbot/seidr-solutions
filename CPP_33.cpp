#include <vector>
#include <algorithm>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_third(const std::vector<int>& vec) {
    std::vector<int> result = vec;
    std::sort(result.begin() + 2, result.end());
    return result;
}

int main() {
    assert(is_same(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), std::vector<int>({5, 6, 1, 2, 3, 4, 8, 9}));
    return 0;
}
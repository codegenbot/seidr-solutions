#include <vector>
#include <algorithm>
#include <cassert>

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(is_same({4, 3, 2, 8}, std::vector<int>{}));
    return 0;
}
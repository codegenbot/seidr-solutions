#include <vector>
#include <algorithm>
#include <cassert>

bool is_same_or_not(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(!is_same_or_not({4, 3, 2, 8}, {}));
    return 0;
}
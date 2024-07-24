#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> rolling_max(const std::vector<int>& v) {
    std::vector<int> result(v.size());
    std::partial_sum(v.begin(), v.end(), result.begin(), [](int a, int b) {
        return std::max(a, b);
    });
    return result;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}
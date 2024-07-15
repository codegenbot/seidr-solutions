#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

bool order_by_points(const std::vector<int>& a, const std::vector<int>& b) {
    return issame(a, b);
}

int main() {
    assert(order_by_points({0, 6, 6, -76, -21, 23, 4}, {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}
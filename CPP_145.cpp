#include <vector>
#include <cassert>
#include <algorithm>
#include <functional>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> order_by_points(const std::vector<int>& vec) {
    std::vector<int> result = vec;
    std::sort(result.begin(), result.end(), std::greater<int>());
    return result;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), std::vector<int>{23, 6, 6, 4, 0, -21, -76}));
    return 0;
}
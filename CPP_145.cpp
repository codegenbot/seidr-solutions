#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> order_by_points(const std::vector<int>& points) {
    std::vector<int> sorted_points = points;
    std::sort(sorted_points.begin(), sorted_points.end());
    return sorted_points;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
    
    return 0;
}
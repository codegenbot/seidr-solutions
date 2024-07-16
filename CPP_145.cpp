#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_vector(const std::vector<int>& vec) {
    std::vector<int> sorted_vec = vec;
    std::sort(sorted_vec.begin(), sorted_vec.end());
    return sorted_vec;
}

bool order_by_points(const std::vector<int>& vec, const std::vector<int>& order) {
    return issame(sort_vector(vec), order);
}

int main() {
    assert(issame(sort_vector({0, 6, 6, -76, -21, 23, 4}), std::vector<int>{-76, -21, 0, 4, 23, 6, 6}));
    assert(order_by_points({0, 6, 6, -76, -21, 23, 4}, {-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> order_by_points(const std::vector<int>& vec) {
    std::vector<int> sortedVec = vec;
    std::sort(sortedVec.begin(), sortedVec.end());
    return sortedVec;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), std::vector<int>{-76, -21, 0, 4, 23, 6, 6}));
    
    return 0;
}
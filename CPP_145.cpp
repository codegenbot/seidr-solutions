#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::std::vector<int>& a, const std::std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::std::vector<int> order_by_points(const std::std::vector<int>& vec) {
    std::std::vector<int> sortedVec = vec;
    std::sort(sortedVec.begin(), sortedVec.end());
    return sortedVec;
}
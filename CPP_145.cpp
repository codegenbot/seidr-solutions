#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> order_by_points(const std::vector<int>& vec) {
    std::vector<int> result = vec;
    std::sort(result.begin(), result.end(), std::greater<int>());
    return result;
}
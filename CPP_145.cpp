#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> order_by_points(std::vector<int> points) {
    std::sort(points.rbegin(), points.rend());
    return points;
}
#include <vector>
#include <algorithm>
#include <cassert> // Include cassert for using assert

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

void order_by_points(std::vector<int>& points) {
    std::sort(points.begin(), points.end());
}
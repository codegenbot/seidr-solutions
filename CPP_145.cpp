#include <vector>
#include <algorithm>

int order_by_points(std::vector<int> points) {
    std::sort(points.begin(), points.end());
    return 0;
}

bool issame(std::vector<int> v1, std::vector<int> v2) {
    return v1 == v2;
}
```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> order_by_points(std::vector<int> points) {
    std::sort(points.begin(), points.end());
    return points;
}

int mainFunction() {
    assert(order_by_points({0,6,6,-76,-21,23,4}) == std::vector<int> {-76, -21, 0, 4, 23, 6, 6});
    if (order_by_points({0,6,6,-76,-21,23,4}) != std::vector<int> {-76, -21, 0, 4, 23, 6, 6})
        return 1; 
    return 0; 
}
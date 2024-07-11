#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> order_by_points(std::vector<int> v) {
    std::sort(v.begin(), v.end());
    return v;
}

int main() {
    assert(order_by_points({0,6,6,-76,-21,23,4}) == std::vector<int>({-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}
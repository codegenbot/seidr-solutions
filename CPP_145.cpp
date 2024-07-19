#include <vector>
#include <cassert>
#include <algorithm> // include algorithm library for sorting

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> order_by_points(const std::vector<int>& vec) {
    std::vector<int> result = vec; // create a copy of the input vector
    std::sort(result.begin(), result.end()); // sort the copy in ascending order
    return result;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}
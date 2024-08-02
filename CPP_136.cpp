#include <vector>
#include <algorithm>
#include <cassert>

int sum_smallest_largest(std::vector<int> vec) {
    std::sort(vec.begin(), vec.end());
    return vec.front() + vec.back();
}

bool is_same(std::vector<int> a, std::vector<int> b) {
    return (sum_smallest_largest(a) == sum_smallest_largest(b));
}

int main() {
    assert(is_same({-6, -4, -4, -3, -100, 1}, {-3, 1}));
    return 0;
}
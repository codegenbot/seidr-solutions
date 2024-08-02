#include <vector>
#include <algorithm>
#include <cassert>

int sum_of_extremes(std::vector<int> vec) {
    return vec.front() + vec.back();
}

bool is_sum_of_extremes_same(std::vector<int> a, std::vector<int> b) {
    return (sum_of_extremes(a) == sum_of_extremes(b));
}

int main() {
    assert(is_sum_of_extremes_same({-6, -4, -4, -3, -100, 1}, {-3, 1}));
    return 0;
}
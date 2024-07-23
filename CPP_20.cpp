#include <vector>
#include <utility>
#include <cassert>
#include <algorithm>

std::pair<size_t, size_t> find_closest_elements(const std::vector<float>& values) {
    auto it = std::min_element(values.begin(), values.end());
    size_t firstIdx = std::distance(values.begin(), it);
    auto next = std::next(it);
    size_t secondIdx = std::distance(values.begin(), next);
    return std::make_pair(firstIdx, secondIdx);
}

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == std::make_pair(0, 1));
    return 0;
}
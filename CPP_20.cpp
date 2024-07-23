#include <vector>
#include <utility>
#include <cassert>
#include <algorithm>

std::pair<float, float> find_closest_elements(const std::vector<float>& values) {
    auto it = std::min_element(values.begin(), values.end());
    auto next = std::next(it);
    return std::make_pair(*it, *next);
}

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == std::make_pair(1.1, 2.2));
    return 0;
}
#include <vector>
#include <utility>
#include <cassert>
#include <algorithm>

bool issame(std::pair<float, float> a, std::pair<float, float> b) {
    return a == b;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& values) {
    auto it = std::min_element(values.begin(), values.end());
    auto next = std::next(it);
    return std::make_pair(*it, *next);
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), std::make_pair(2.2, 3.1)));
    return 0;
}
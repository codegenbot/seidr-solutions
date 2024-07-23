#include <vector>
#include <utility>
#include <cassert>
#include <algorithm>

std::pair<float, float> find_closest_elements(const std::vector<float>& values) {
    auto it = std::min_element(values.begin(), values.end());
    auto next = std::next(it);
    return std::make_pair(*it, *next);
}

bool issame(const std::pair<float, float>& p, const std::pair<float, float>& q) {
    return p == q;
}

int main() {
    assert(issame(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}), std::make_pair(1.1f, 2.2f));
    return 0;
}
#include <vector>
#include <utility>
#include <cassert>
#include <algorithm>

bool issame(std::pair<float, float> a, std::pair<float, float> b) {
    return a == b;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& values) {
    auto it = std::min_element(values.begin(), values.end());
    auto closest = std::make_pair(*it, *it);
    for (auto jt = it + 1; jt != values.end(); ++jt) {
        if (std::abs(*jt - values.front()) < std::abs(closest.second - closest.first)) {
            closest.second = *jt;
        }
    }
    return closest;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), std::make_pair(1.1, 2.2)));
    return 0;
}
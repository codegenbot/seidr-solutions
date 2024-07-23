#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

std::pair<float, float> find_closest_elements(std::vector<float> vec) {
    std::sort(vec.begin(), vec.end());
    return {vec[0], vec[1]};
}

bool issame(std::pair<float, float> a, std::pair<float, float> b) {
    return std::abs(a.first - b.first) < 0.0001 && std::abs(a.second - b.second) < 0.0001;
}

int main() {
    assert(issame(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}), {1.1f, 2.2f});
    return 0;
}
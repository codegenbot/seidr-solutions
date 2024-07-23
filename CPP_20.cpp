#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <cmath>

std::pair<float, float> find_closest_elements(std::vector<float> vec) {
    std::sort(vec.begin(), vec.end());
    float min_diff = std::abs(vec[0] - vec[1]);
    std::pair<float, float> result = {vec[0], vec[1]};

    for (size_t i = 1; i < vec.size() - 1; ++i) {
        float diff = std::abs(vec[i] - vec[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            result = {vec[i], vec[i + 1]};
        }
    }

    return result;
}

bool issame(std::pair<float, float> a, std::pair<float, float> b) {
    return std::abs(a.first - b.first) < 0.0001 && std::abs(a.second - b.second) < 0.0001;
}

int main() {
    assert(issame(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}), {1.1f, 2.2f});
    return 0;
}
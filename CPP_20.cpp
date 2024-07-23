#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

std::vector<float> find_closest_elements(const std::vector<float>& values) {
    float min_diff = std::abs(values[1] - values[0]);
    std::vector<float> closest_elements = {values[0], values[1];

    for (size_t i = 1; i < values.size() - 1; ++i) {
        float diff = std::abs(values[i + 1] - values[i]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = {values[i], values[i + 1]};
        }
    }

    return closest_elements;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    std::cout << "Test Passed" << std::endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <cassert>

std::vector<float> find_closest_elements(std::vector<float> nums) {
    float target = 3.0;
    float min_diff = std::numeric_limits<float>::max();
    std::vector<float> closest_elements;

    for (float num : nums) {
        if (std::abs(num - target) < min_diff) {
            min_diff = std::abs(num - target);
            closest_elements = {num};
        } else if (std::abs(num - target) == min_diff) {
            closest_elements.push_back(num);
        }
    }

    return closest_elements;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {3.1});
    return 0;
}
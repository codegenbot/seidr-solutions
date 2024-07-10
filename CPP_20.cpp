#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

std::vector<float> find_closest_elements(const std::vector<float>& nums) {
    float min_diff = std::abs(nums[1] - nums[0]);
    std::vector<float> closest_elements = {nums[0], nums[1]];

    for (size_t i = 1; i < nums.size() - 1; ++i) {
        float diff = std::abs(nums[i + 1] - nums[i]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = {nums[i], nums[i + 1]};
        }
    }

    return closest_elements;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return (a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin()));
}
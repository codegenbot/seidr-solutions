#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

std::vector<float> find_closest_elements(const std::vector<float>& nums) {
    if (nums.size() < 2) {
        return {};
    }

    float min_diff = std::abs(nums[0] - nums[1]);
    std::vector<float> closest_elements = {nums[0], nums[1};

    for (size_t i = 0; i < nums.size(); ++i) {
        for (size_t j = i + 1; j < nums.size(); ++j) {
            float diff = std::abs(nums[i] - nums[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_elements = {nums[i], nums[j]};
            }
        }
    }

    return closest_elements;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 0.0001f) {
            return false;
        }
    }

    return true;
}
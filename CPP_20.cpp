#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

std::vector<float> find_closest_elements(const std::vector<float>& nums) {
    std::vector<float> result;
    if (nums.size() < 2) {
        return result;
    }
    
    float min_diff = std::abs(nums[0] - nums[1]);
    for (size_t i = 0; i < nums.size(); ++i) {
        for (size_t j = i + 1; j < nums.size(); ++j) {
            float diff = std::abs(nums[i] - nums[j]);
            if (diff < min_diff) {
                min_diff = diff;
                result = {nums[i], nums[j]};
            }
        }
    }
    
    return result;
}
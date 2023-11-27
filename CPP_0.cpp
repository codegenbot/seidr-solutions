#include <iostream>
#include <vector>
#include <cmath>

bool has_close_elements(std::vector<float> nums, float threshold) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (std::abs(nums[i] - nums[j]) < threshold) {
                return true;
            }
        }
    }
    return false;
}
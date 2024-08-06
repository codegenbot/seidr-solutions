#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

std::vector<float> find_closest_elements(std::vector<float> nums) {
    std::vector<float> result;
    std::sort(nums.begin(), nums.end());
    for (size_t i = 1; i < nums.size(); ++i) {
        if (result.empty() || (nums[i] - nums[i - 1] < result.back() - result.front())) {
            result.clear();
            result.push_back(nums[i - 1]);
            result.push_back(nums[i]);
        }
    }
    return result;
}
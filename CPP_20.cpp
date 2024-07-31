#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> find_closest_elements(const std::vector<float>& nums) {
    std::vector<float> result;
    if (nums.size() < 2)
        return result;
    
    float min_diff = std::abs(nums[1] - nums[0]);
    for (size_t i = 1; i < nums.size() - 1; ++i) {
        float diff = std::abs(nums[i + 1] - nums[i]);
        if (diff < min_diff) {
            min_diff = diff;
            result.clear();
            result.push_back(nums[i]);
            result.push_back(nums[i + 1]);
        }
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}
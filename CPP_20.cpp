#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

std::vector<float> find_closest_elements(const std::vector<float>& nums) {
    float min_diff = std::abs(nums[0] - nums[1]);
    std::vector<float> result = {nums[0], nums[1]};

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

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}
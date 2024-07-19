#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

std::vector<float> find_closest_elements(const std::vector<float>& nums) {
    float min_diff = std::abs(nums[0] - nums[1]);
    std::vector<float> result = {nums[0], nums[1]};

    for (size_t i = 0; i < nums.size() - 1; ++i) {
        if (std::abs(nums[i] - nums[i + 1]) < min_diff) {
            min_diff = std::abs(nums[i] - nums[i + 1]);
            result = {nums[i], nums[i + 1]};
        }
    }

    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b; // Check if vectors are equal
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}
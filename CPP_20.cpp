#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a[0] == b[0] && a[1] == b[1];
}

std::vector<float> find_closest_elements(std::vector<float> nums) {
    std::sort(nums.begin(), nums.end());
    float min_diff = std::abs(nums[1] - nums[0]);
    std::vector<float> closest_elements = {nums[0], nums[1]}; // Fixed the closing bracket here

    for (size_t i = 1; i < nums.size() - 1; ++i) {
        float diff = std::abs(nums[i + 1] - nums[i]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = {nums[i], nums[i + 1]};
        }
    }

    return closest_elements;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}
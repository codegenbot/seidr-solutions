#include <iostream>
#include <vector>
#include <cassert>

std::vector<float> find_closest_elements(std::vector<float> nums) {
    // Implement finding the closest elements logic here
    // For simplicity, let's find the two closest elements in the array nums
    float min_diff = std::abs(nums[1] - nums[0]);
    int idx1 = 0, idx2 = 1;

    for (size_t i = 0; i < nums.size(); ++i) {
        for (size_t j = i + 1; j < nums.size(); ++j) {
            float diff = std::abs(nums[i] - nums[j]);
            if (diff < min_diff) {
                min_diff = diff;
                idx1 = i;
                idx2 = j;
            }
        }
    }

    // Return the closest elements in a vector
    return {nums[idx1], nums[idx2]};
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}
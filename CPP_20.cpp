#include <iostream>
#include <vector>
#include <cassert>

std::vector<float> find_closest_elements(const std::vector<float>& nums) {
    // Implementation of finding closest elements
    // Assuming the closest elements are the two consecutive elements with the smallest absolute difference
    float min_diff = std::numeric_limits<float>::max();
    std::vector<float> closest_elements;

    for (size_t i = 0; i < nums.size() - 1; ++i) {
        float diff = std::abs(nums[i] - nums[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = {nums[i], nums[i + 1]};
        }
    }

    return closest_elements;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    // Implementation of comparing two vectors
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}
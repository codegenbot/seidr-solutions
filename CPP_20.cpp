#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

std::vector<float> find_closest_elements(const std::vector<float>& nums) {
    std::vector<float> closest;
    float min_diff = std::abs(nums[1] - nums[0]);
    for (int i = 1; i < nums.size() - 1; ++i) {
        float diff = std::abs(nums[i+1] - nums[i]);
        if (diff < min_diff) {
            min_diff = diff;
            closest = {nums[i], nums[i+1]};
        }
    }
    return closest;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
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
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    return 0;
}
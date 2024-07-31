#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

std::vector<float> find_closest_elements(const std::vector<float>& nums) {
    if (nums.size() < 2) {
        return {};
    }

    float min_diff = std::abs(nums[0] - nums[1]);
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

    return {nums[idx1], nums[idx2]};
}

bool issame(const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }

    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});

    return 0;
}
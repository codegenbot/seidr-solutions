#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

std::vector<float> find_closest_elements(const std::vector<float>& nums) {
    std::vector<float> result;

    if (nums.size() < 2) {
        return result;
    }

    float average = 0;
    for (const auto& num : nums) {
        average += num;
    }
    average /= nums.size();

    float min_diff = std::abs(nums[0] - average);
    float closest1 = nums[0];
    float closest2 = nums[1];

    for (size_t i = 1; i < nums.size(); ++i) {
        float diff = std::abs(nums[i] - average);
        if (diff < min_diff) {
            min_diff = diff;
            closest1 = nums[i];
        }
        else if (diff == min_diff) {
            closest2 = nums[i];
        }
    }

    result.push_back(closest1);
    result.push_back(closest2);

    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return (a == b);
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});

    return 0;
}
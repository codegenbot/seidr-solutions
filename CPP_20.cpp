#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

std::vector<float> find_closest_elements(const std::vector<float>& nums) {
    std::vector<float> result;

    if (nums.size() < 2) {
        return result;
    }

    std::vector<std::pair<float, float>> diff_nums;
    for (size_t i = 0; i < nums.size() - 1; ++i) {
        diff_nums.emplace_back(fabs(nums[i] - nums[i + 1]), nums[i]);
    }

    std::sort(diff_nums.begin(), diff_nums.end());

    result.push_back(diff_nums[0].second);
    result.push_back(diff_nums[1].second);

    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return (a == b);
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {3.1, 4.1});

    return 0;
}
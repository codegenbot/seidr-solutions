#include <vector>
#include <algorithm>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> rolling_max(const std::vector<int>& nums) {
    std::vector<int> result;
    for (size_t i = 0; i < nums.size(); ++i) {
        result.push_back(*std::max_element(nums.begin() + i, nums.begin() + std::min(i + 3, static_cast<int>(nums.size()))));
    }
    return result;
}
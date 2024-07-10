#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

namespace cpp9 {
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
}

int main() {
    std::vector<int> nums = {1, 3, 5, 2, 7, 4, 8};
    std::vector<int> max_values = cpp9::rolling_max(nums);

    assert(cpp9::issame(cpp9::rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));

    return 0;
}
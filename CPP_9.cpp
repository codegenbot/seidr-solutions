#include <vector>
#include <algorithm>
#include <iostream>

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
    std::vector<int> input = {1, 3, 5, 2, 4, 6};
    std::vector<int> result = cpp9::rolling_max(input);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}
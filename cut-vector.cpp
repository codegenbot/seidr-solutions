```cpp
#include <vector>
#include <algorithm>
#include <functional>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    auto it = std::min_element(nums.begin(), nums.end(),
        [&](int a, int b){ return std::abs(a - (nums.back() + nums[0]) / 2.0) < 
                           std::abs(b - (nums.back() + nums[0]) / 2.0); });
    auto cut = it;
    std::vector<int> left(nums.begin(), cut);
    std::vector<int> right(cut, nums.end());
    return {{left}, {right}};
}```
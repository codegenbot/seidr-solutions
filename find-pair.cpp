```cpp
#include <vector>
#include <algorithm>
#include <cstdint>
#include <initializer_list>

std::pair<int, int> findPair(std::vector<int> nums, int target) {
    std::sort(nums.begin(), nums.end());
    std::size_t left = 0;
    std::size_t right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return {nums[left], nums[right]};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return {-1, -1};
}
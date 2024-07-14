```cpp
#include <vector>
#include <algorithm>

std::pair<int, int> findPair(std::vector<int> nums, int target) {
    std::sort(nums.begin(), nums.end());
    size_t left = 0;
    size_t right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return std::make_pair(nums[left], nums[right]);
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return {-1, -1};
}
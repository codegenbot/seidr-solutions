```cpp
#include <vector>
#include <algorithm>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        int complement = target - nums[i];
        int j = i + 1;
        while (j < nums.size() && nums[j] < complement) {
            if (nums[j] + nums[i] == target) {
                int a = nums[i], b = nums[j];
                return std::vector<int>{a, b};
            }
            j++;
        }
    }
    return {-1, -1};
}
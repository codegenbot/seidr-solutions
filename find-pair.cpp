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
                int result[2] = {nums[i], nums[j]};
                return std::vector<int>(result, result+2);
            }
            j++;
        }
    }
    return {-1, -1};
}
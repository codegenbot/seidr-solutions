```cpp
#include <vector>
#include <algorithm>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        int complement = target - nums[i];
        int j = i + 1;
        while (j < nums.size() && nums[j] < complement) {
            if (nums[j] + nums[i] == target) {
                return std::make_pair(nums[i], nums[j]);
            }
            j++;
        }
    }
    return std::make_pair(-1, -1);
}
```cpp
#include <vector>
#include <algorithm>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        int complement = target - nums[i];
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] == complement) {
                return std::make_pair(nums[i], nums[j]);
            }
        }
    }
    return std::make_pair(-1, -1);
}
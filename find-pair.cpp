```
#include <vector>

std::vector<int> find_pair(const std::vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return std::vector<int>{nums[i], nums[j]};
            }
        }
    }
    return std::vector<int>();
}
```

```
#include <iostream>
#include <vector>

std::vector<int> find_pair(const std::vector<int>& nums, int target) {
    for (size_t i = 0; i < nums.size(); ++i) {
        for (size_t j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return std::vector<int>{nums[i], nums[j]};
            }
        }
    }
    return std::vector<int>();
}
```
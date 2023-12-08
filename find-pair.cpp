```cpp
#include <vector>
#include <algorithm>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    int firstNum = 0;
    for (int num : nums) {
        int complementNum = target - num;
        if (std::find(nums.begin(), nums.end(), complementNum) != nums.end()) {
            return { firstNum, complementNum };
        }
        firstNum = num;
    }
    return {};
}
```
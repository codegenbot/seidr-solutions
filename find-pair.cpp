```cpp
#include <iostream>
#include <vector>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    int firstNum = 0;
    for (int num : nums) {
        int complementNum = target - num;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == complementNum) {
                return { firstNum, nums[i] };
            }
        }
        firstNum = num;
    }
    return {};
}
```
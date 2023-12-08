```cpp
#include <unordered_set>
#include <iostream>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::unordered_set<int> complement;
    int firstNum = 0;
    for (int num : nums) {
        int complementNum = target - num;
        if (complement.count(complementNum)) {
            return { firstNum, complementNum };
        }
        complement.insert(num);
        firstNum = num;
    }
    return {};
}
```
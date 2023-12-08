```cpp
#include <vector>
#include <unordered_map>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> complement;
    for (int i = 0; i < nums.size(); i++) {
        int complementNum = target - nums[i];
        if (complement.count(complementNum)) {
            return { complement[complementNum], i };
        }
        complement[nums[i]] = i;
    }
    return {};
}
```
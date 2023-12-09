```cpp
#include <vector>
#include <unordered_set>

std::vector<int> findPair(const std::vector<int>& nums, int target) {
    std::unordered_set<int> complement;
    for (int num : nums) {
        int complementNum = target - num;
        if (complement.count(complementNum)) {
            return { num, complementNum };
        }
        complement.insert(num);
    }
    return {};
}
```
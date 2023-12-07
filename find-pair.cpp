```cpp
#include <iostream>
#include <vector>

std::vector<int> find_pair(const std::vector<int>& nums, int target) {
    for (auto it1 = nums.begin(); it1 != nums.end(); ++it1) {
        for (auto it2 = it1 + 1; it2 != nums.end(); ++it2) {
            if (*it1 + *it2 == target) {
                return {*it1, *it2};
            }
        }
    }
    return {};
}
```
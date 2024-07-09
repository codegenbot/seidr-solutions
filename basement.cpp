```cpp
#include <vector>
#include <numeric>

int basement(std::vector<int> nums) {
    std::partial_sum(nums.begin(), nums.end(), nums.begin());
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] < 0)
            return i;
    }
    return -1;
};
#include <vector>
#include <cstddef>

int basement(std::vector<int> nums) {
    if (nums.empty()) return -1;
    
    int sum = 0;
    for (std::size_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}
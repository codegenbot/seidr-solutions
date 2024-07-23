#include <vector>
#include <cstddef>

const std::vector<int>& basement(const std::vector<int>& nums) {
    int sum = 0;
    for (size_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) return nums.begin() + i; 
    }
    return nums.end();
}
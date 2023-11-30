#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long minSum = nums[0];
    long long currentSum = nums[0];
    
    for (int i = 1; i < nums.size(); i++) {
        currentSum = std::min(nums[i], currentSum + nums[i]);
        minSum = std::min(minSum, currentSum);
    }
    
    return minSum;
}
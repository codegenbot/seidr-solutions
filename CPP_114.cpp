#include <vector>

long long minSubArraySum(std::vector<long long> nums){
    long long minSum = nums[0];
    long long currentSum = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        currentSum = std::min(nums[i], currentSum + nums[i]);
        minSum = std::min(minSum, currentSum);
    }
    
    return minSum;
}

int main() {
    std::vector<long long> nums = {1, -3, 2, 1, -1};
    long long minSum = minSubArraySum(nums);
    return 0;
}
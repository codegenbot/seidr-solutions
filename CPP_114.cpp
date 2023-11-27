#include <vector>
#include <cassert>

long long minSubArraySum(std::vector<long long> nums){
    long long minSum = nums[0];
    long long currSum = nums[0];
    
    for(int i = 1; i < nums.size(); i++){
        currSum = std::min(nums[i], currSum + nums[i]);
        minSum = std::min(minSum, currSum);
    }
    
    return minSum;
}

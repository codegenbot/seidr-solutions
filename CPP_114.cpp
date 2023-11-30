#include <vector>
#include <climits>

long long minSubArraySum(vector<long long> nums) {
    long long minSum = LLONG_MAX;
    long long currentSum = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        currentSum += nums[i];
        minSum = min(minSum, currentSum);
        if (currentSum > 0) {
            currentSum = 0;
        }
    }
    
    return minSum;
}
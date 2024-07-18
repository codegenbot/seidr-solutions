#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long minSum = nums[0];
    long long currentSum = 0;

    for (long long num : nums) {
        currentSum = std::min(num, currentSum + num);
        minSum = std::min(minSum, currentSum);
    }

    return minSum;
}
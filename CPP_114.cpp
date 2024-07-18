#include <vector>

long long minSubArraySum(const std::vector<long long>& nums) {
    long long minSum = nums[0];
    long long currentSum = 0;
    
    for (long long num : nums) {
        currentSum = std::min(num, currentSum + num);
        minSum = std::min(minSum, currentSum);
    }
    
    return minSum;
}

int main() {
    std::vector<long long> nums = {5, -2, 3, 1, -1};
    long long result = minSubArraySum(nums);

    return 0;
}
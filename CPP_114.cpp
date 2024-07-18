#include <vector>

long long minSubArraySum(std::vector<long long>& nums){
    long long minSum = nums[0];
    long long currentSum = 0;
    
    for (long long num : nums) {
        currentSum = std::min(num, currentSum + num);
        minSum = std::min(minSum, currentSum);
    }
    
    return minSum;
}

int main() {
    std::vector<long long> nums = {3, -4, 2, -3, -1, 7, -5}; // Example input vector
    long long result = minSubArraySum(nums);
    
    // Output the result here
    return 0;
}
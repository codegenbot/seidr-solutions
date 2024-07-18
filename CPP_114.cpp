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
    std::vector<long long> input = {3, -5, 2, 1, -4, 6, -5, 1};
    long long result = minSubArraySum(input);
    return 0;
}
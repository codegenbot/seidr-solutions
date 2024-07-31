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
    std::vector<long long> nums = {3, -4, 2, -1, 6, -3};
    long long result = minSubArraySum(nums);
    return 0;
}
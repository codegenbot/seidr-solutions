#include <vector>

long long minSubArraySum(vector<long long> nums) {
    long long minSum = nums[0]; // Initialize minSum with the first element of nums
    long long currentSum = nums[0]; // Initialize currentSum with the first element of nums

    for (int i = 1; i < nums.size(); i++) {
        // If adding the current element to the currentSum results in a smaller sum,
        // update the currentSum to start a new sub-vector from the current element
        currentSum = std::min(nums[i], currentSum + nums[i]);

        // Update minSum if the currentSum is smaller
        minSum = std::min(minSum, currentSum);
    }

    return minSum;
}
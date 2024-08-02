long long minSubArraySum(vector<long long> nums) {
    long long minSum = LLONG_MAX; // Initialize minimum sum
    long long currentSum = 0; // Initialize current sum

    for (int i = 0; i < nums.size(); i++) {
        currentSum += nums[i]; // Add the current element to the sum
        if (currentSum > minSum) { // If the current sum is greater than the minimum sum, update the minimum sum
            minSum = currentSum;
        }
    }

    return minSum; // Return the minimum sum
}
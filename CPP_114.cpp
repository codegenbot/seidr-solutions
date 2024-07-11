long long minSum = INT_MAX, currSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        currSum = min(nums[i], currSum + nums[i]);
        minSum = min(minSum, currSum);
    }
    return minSum;
}
long long minSum = nums[0], sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum = min(nums[i], sum + nums[i]);
        minSum = min(minSum, sum);
    }
    return minSum;
}
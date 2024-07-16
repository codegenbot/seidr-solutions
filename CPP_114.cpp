long long minSum = nums[0], sum = 0;
    for (long long num : nums) {
        sum = min(num, sum + num);
        minSum = min(minSum, sum);
    }
    return minSum;
}
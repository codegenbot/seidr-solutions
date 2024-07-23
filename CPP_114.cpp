long long minSum = nums[0], curSum = 0;
    for (long long num : nums) {
        curSum = min(num, curSum + num);
        minSum = min(minSum, curSum);
    }
    return minSum;
}
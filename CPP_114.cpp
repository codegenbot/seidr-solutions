long long minSum = nums[0], sum = 0;
    for (int num : nums) {
        sum = min(num, num + sum);
        minSum = min(minSum, sum);
    }
    return minSum;
}
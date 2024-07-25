long long min_sum = nums[0];
    long long sum = 0;
    for (long long num : nums) {
        sum = min(num, sum + num);
        min_sum = min(min_sum, sum);
    }
    return min_sum;
}
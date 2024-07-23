long long min_sum = nums[0], current_sum = 0;
    for (long long num : nums) {
        current_sum = min(num, current_sum + num);
        min_sum = min(min_sum, current_sum);
    }
    return min_sum;
}
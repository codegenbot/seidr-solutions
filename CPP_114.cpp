long long min_sum = LONG_LONG_MAX, current_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        current_sum = min(nums[i], current_sum + nums[i]);
        min_sum = min(min_sum, current_sum);
    }
    return min_sum;
}
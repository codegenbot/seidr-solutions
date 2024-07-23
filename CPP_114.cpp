long long min_sum = nums[0], cur_sum = 0;
    for (long long i : nums) {
        cur_sum = min(i, cur_sum + i);
        min_sum = min(min_sum, cur_sum);
    }
    return min_sum;
}
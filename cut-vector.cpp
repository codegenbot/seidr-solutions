int left_sum = 0;

for (int i = 0; i < n - 1; ++i) {
    left_sum += nums[i];
    int right_sum = sum - left_sum;
    int diff = std::abs(left_sum - right_sum);
    if (diff <= min_diff) {
        min_diff = diff;
        cut_idx = i + 1;
    }
}
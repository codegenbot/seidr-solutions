int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_non_zero_sum_of_digits = false;
        long absNum = labs(num);
        while (absNum > 0) {
            int digit = absNum % 10;
            if (digit != 0 || (num < 0 && digit == -1)) {
                has_non_zero_sum_of_digits = true;
                break;
            }
            absNum /= 10;
        }
        if (has_non_zero_sum_of_digits) count++;
    }
    return count;
}
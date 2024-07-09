int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_sum_greater_than_zero = false;
        if (num < 0) {
            num = -num; // remove sign
        }
        while (num > 0) {
            int digit = num % 10;
            num /= 10;
            if (digit != 0 || (digit == 0 && num == 0)) {
                has_sum_greater_than_zero = true;
                break;
            }
        }
        if (has_sum_greater_than_zero) {
            count++;
        }
    }
    return count;
}
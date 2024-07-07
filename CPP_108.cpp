int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num < 0) {
            num = -num; // convert to positive for calculation
        }
        bool has_non_zero_digit = false;
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0) {
                has_non_zero_digit = true;
                break;
            }
            num /= 10;
        }
        if (has_non_zero_digit) {
            count++;
        }
    }
    return count;
}
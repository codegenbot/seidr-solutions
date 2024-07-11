int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            bool has_sum_greater_than_zero = false;
            long abs_num = labs(num);
            while (abs_num > 0) {
                int digit = abs_num % 10;
                if (digit != 0 || num < 0) {
                    has_sum_greater_than_zero = true;
                    break;
                }
                abs_num /= 10;
            }
            if (has_sum_greater_than_zero) count++;
        } else if (num < 0) {
            bool has_sum_greater_than_zero = false;
            long abs_num = labs(num);
            while (abs_num > 0) {
                int digit = abs_num % 10;
                if (digit != 0 || num > 0) {
                    has_sum_greater_than_zero = true;
                    break;
                }
                abs_num /= 10;
            }
            if (has_sum_greater_than_zero) count++;
        }
    }
    return count;
}
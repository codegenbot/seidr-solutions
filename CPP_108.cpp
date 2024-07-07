int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_positive_sum_of_digits = false;
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }
            if (sum > 0) {
                has_positive_sum_of_digits = true;
            }
        } else {
            int sum = 0, absolute_num = abs(num);
            while (absolute_num > 0) {
                int digit = absolute_num % 10;
                if (digit != 0 || num < 0) {
                    sum += digit;
                }
                absolute_num /= 10;
            }
            if (sum > 0) {
                has_positive_sum_of_digits = true;
            }
        }
        if (has_positive_sum_of_digits) {
            count++;
        }
    }
    return count;
}
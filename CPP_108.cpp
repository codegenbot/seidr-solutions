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
        } else {
            num = -num; // convert to positive
            int sum = 0;
            bool is_negative = true;
            while (num > 0) {
                int digit = num % 10;
                if (!is_negative && digit < 0) {
                    break;
                }
                if (is_negative && digit >= 0) {
                    is_negative = false;
                }
                sum += digit;
                num /= 10;
            }
        }
        if (sum > 0) {
            has_positive_sum_of_digits = true;
        }
        if (has_positive_sum_of_digits) {
            count++;
        }
    }
    return count;
}
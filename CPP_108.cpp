int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum_of_digits = 0;
            int abs_num = abs(num);
            while (abs_num > 0) {
                int digit = abs_num % 10;
                sum_of_digits += digit;
                abs_num /= 10;
            }
            if (sum_of_digits > 0) {
                count++;
            }
        } else if (num < 0) {
            int sum_of_digits = 0;
            int abs_num = abs(num);
            bool is_negative = true;
            while (abs_num > 0) {
                int digit = abs_num % 10;
                if (is_negative && digit != 0) {
                    sum_of_digits -= digit;
                } else {
                    sum_of_digits += digit;
                }
                abs_num /= 10;
            }
            if (sum_of_digits > 0) {
                count++;
            }
        }
    }
    return count;
}
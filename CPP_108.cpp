int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum_of_digits = 0;
            bool is_negative = false;
            long abs_num = labs(num);
            while (abs_num > 0) {
                int digit = abs_num % 10;
                if (digit != 0 || !is_negative)
                    sum_of_digits += digit;
                else
                    sum_of_digits -= digit;
                abs_num /= 10;
                is_negative = false;
                if (abs_num == 0 && digit < 0) {
                    is_negative = true;
                    break;
                }
            }
            if (sum_of_digits > 0)
                count++;
        } else if (num < 0) {
            int sum_of_digits = 0;
            bool is_negative = true;
            long abs_num = labs(num);
            while (abs_num > 0) {
                int digit = abs_num % 10;
                if (digit != 0 || !is_negative)
                    sum_of_digits += digit;
                else
                    sum_of_digits -= digit;
                abs_num /= 10;
                is_negative = false;
                if (abs_num == 0 && digit < 0) {
                    is_negative = true;
                    break;
                }
            }
            if (sum_of_digits > 0)
                count++;
        }
    }
    return count;
}
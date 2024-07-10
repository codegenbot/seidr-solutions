int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum_digits = 0;
            int abs_num = num;
            while (abs_num > 0) {
                sum_digits += abs_num % 10;
                abs_num /= 10;
            }
            if (sum_digits > 0) {
                count++;
            }
        } else {
            int sum_digits = 0, sign = 1;
            int abs_num = num;
            while (abs_num > 0) {
                if (abs_num % 10 != 0) {
                    sum_digits += sign * (abs_num % 10);
                }
                abs_num /= 10;
            }
            if (sum_digits > 0) {
                count++;
            }
        }
    }
    return count;
}
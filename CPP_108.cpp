int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum_of_digits = 0;
            int abs_num = num;
            while (abs_num > 0) {
                sum_of_digits += abs_num % 10;
                abs_num /= 10;
            }
            if (sum_of_digits > 0) {
                count++;
            }
        } else {
            int sum_of_digits = 0, sign = -1;
            num *= -1;
            while (num > 0) {
                sum_of_digits += num % 10 * sign;
                num /= 10;
                if (num == 0) sign = 1;
            }
            if (sum_of_digits > 0) {
                count++;
            }
        }
    }
    return count;
}
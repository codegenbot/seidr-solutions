int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int abs_num = abs(num);
        int sign = 1;
        if (num < 0) {
            sign = -1;
        }
        int sum_digits = 0;
        while (abs_num > 0) {
            int digit = abs_num % 10;
            sum_digits += digit;
            abs_num /= 10;
        }
        if (sign * sum_digits > 0) {
            count++;
        }
    }
    return count;
}
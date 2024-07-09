int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int sum_of_digits = 0;
        bool first_digit_negative = false;
        if (num < 0) {
            first_digit_negative = true;
            num = -num;
        }
        while (num > 0) {
            int digit = num % 10;
            if (!first_digit_negative || digit != 0) {
                sum_of_digits += digit;
            }
            num /= 10;
        }
        if (sum_of_digits > 0) {
            count++;
        }
    }
    return count;
}
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int sum_digits = 0;
        bool has_negative_digit = false;
        if (num < 0) {
            num = -num;
            has_negative_digit = true;
        }
        while (num > 0) {
            int digit = num % 10;
            sum_digits += digit;
            if (!has_negative_digit && digit == 5) {
                break;
            }
            num /= 10;
        }
        if (sum_digits > 0 || has_negative_digit) {
            count++;
        }
    }
    return count;
}
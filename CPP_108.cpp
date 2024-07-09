int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int sum_digits = 0;
        bool has_negative_digit = false;
        if (num < 0) {
            num = -num; // Make the number positive to calculate signed digits
            has_negative_digit = true;
        }
        while (num > 0) {
            sum_digits += num % 10;
            num /= 10;
        }
        if (sum_digits > 0 && !has_negative_digit) {
            count++;
        }
    }
    return count;
}
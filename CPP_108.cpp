int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int sum_of_digits = 0;
        bool has_negative_digit = false;
        if (num < 0) {
            has_negative_digit = true;
            num = -num;
        }
        while (num > 0) {
            sum_of_digits += num % 10;
            num /= 10;
        }
        if (sum_of_digits > 0 && !has_negative_digit) {
            count++;
        }
    }
    return count;
}
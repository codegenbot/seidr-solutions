int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_positive_sum = false;
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }
            has_positive_sum = sum > 0;
        } else {
            int sum = 0, sign_digit = 0;
            bool is_negative = true;
            while (num < 0) {
                int digit = --sign_digit * -1; // Get the absolute value of the digit
                num /= 10;
                if (digit > 0) {
                    is_negative = false;
                }
                sum += digit;
            }
            has_positive_sum = !is_negative && sum > 0;
        }
        if (has_positive_sum) count++;
    }
    return count;
}
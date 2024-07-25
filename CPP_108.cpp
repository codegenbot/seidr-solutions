int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum_of_digits = 0;
            bool has_negative_digit = false;
            while (num != 0) {
                int digit = abs(num % 10);
                if (digit < 5) {
                    sum_of_digits += digit;
                } else {
                    sum_of_digits -= digit - 5;
                    has_negative_digit = true;
                }
                num /= 10;
            }
            if (has_negative_digit || sum_of_digits > 0) {
                count++;
            }
        }
    }
    return count;
}
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum_of_digits = 0;
            bool has_negative_digit = false;
            while (num != 0) {
                int digit = abs(num % 10);
                if (digit == 5 || digit == 8 || digit == 9) {
                    sum_of_digits += digit - 5;
                } else if (digit > 0) {
                    sum_of_digits += digit;
                }
                num /= 10;
                if (num < 0 && !has_negative_digit) {
                    has_negative_digit = true;
                }
            }
            if (!has_negative_digit || sum_of_digits > 0) {
                count++;
            }
        } else if (num < 0) {
            int sum_of_digits = 0;
            bool has_negative_digit = false;
            while (num != 0) {
                int digit = abs(num % 10);
                if (digit == 5 || digit == 8 || digit == 9) {
                    sum_of_digits += digit - 5;
                } else if (digit > 0) {
                    sum_of_digits += digit;
                }
                num /= 10;
                if (!has_negative_digit && digit < 5) {
                    has_negative_digit = true;
                }
            }
            if (sum_of_digits > 0 || !has_negative_digit) {
                count++;
            }
        }
    }
    return count;
}
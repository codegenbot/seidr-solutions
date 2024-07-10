int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            bool has_negative_digit = false;
            int sum_of_digits = 0;
            while (num != 0) {
                int digit = abs(num % 10);
                if (digit == 5 || digit == 8 || digit == 9) {
                    sum_of_digits += digit - 5;
                } else if (digit != 5 && digit != 8 && digit != 9) {
                    sum_of_digits += digit;
                }
                num /= 10;
            }
            count++;
        } else if (num < 0) {
            int sum_of_digits = 0;
            while (abs(num) != 0) {
                int digit = abs(num % 10);
                if (digit == 5 || digit == 8 || digit == 9) {
                    sum_of_digits += digit - 5;
                } else if (digit != 5 && digit != 8 && digit != 9) {
                    sum_of_digits += digit - 5;
                }
                num /= 10;
            }
            count++;
        }
    }
    return count;
}
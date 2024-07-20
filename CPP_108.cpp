int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum_digits = 0;
            bool negative = false;
            while (num != 0) {
                int digit = num % 10;
                if (num < 0) {
                    digit *= -1;
                    negative = true;
                }
                sum_digits += digit;
                num /= 10;
            }
            if (!negative && sum_digits > 0 || (negative && sum_digits >= 1)) {
                count++;
            }
        } else if (num < 0) {
            int sum_digits = 0;
            bool negative = true;
            while (num != 0) {
                int digit = num % 10;
                digit *= -1;
                sum_digits += digit;
                num /= 10;
            }
            if (sum_digits > 0) {
                count++;
            }
        }
    }
    return count;
}
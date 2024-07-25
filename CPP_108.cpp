int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool has_negative_digit = false;
            while (num != 0) {
                int digit = abs(num % 10);
                num /= 10;
                if (digit < 0) {
                    has_negative_digit = true;
                    digit = -digit;
                }
                sum += digit;
            }
            if (!has_negative_digit && sum > 0)
                count++;
        } else {
            int sum = 0;
            bool has_negative_digit = false;
            while (num != 0) {
                int digit = num % 10;
                num /= 10;
                if (digit < 0) {
                    has_negative_digit = true;
                    digit = -digit;
                }
                sum += digit;
            }
            if (!has_negative_digit && sum > 0)
                count++;
        }
    }
    return count;
}
int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            bool has_five_or_eight = false;
            while (num != 0) {
                int digit = num % 10;
                if (digit == 5 || digit == 8) {
                    has_five_or_eight = true;
                }
                num /= 10;
            }
            if (!has_five_or_eight) {
                count++;
            }
        } else if (num < 0) {
            bool has_positive_digit = false;
            while (abs(num) != 0) {
                int digit = abs(num) % 10;
                if (digit > 0) {
                    has_positive_digit = true;
                }
                num /= 10;
            }
            if (!has_positive_digit) {
                count++;
            }
        }
    }
    return count;
}
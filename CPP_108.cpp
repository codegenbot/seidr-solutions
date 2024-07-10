int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            bool has_five_or_nine = false;
            while (num != 0) {
                int digit = abs(num % 10);
                if (digit == 5 || digit == 8 || digit == 9) {
                    has_five_or_nine = true;
                }
                num /= 10;
            }
            if (!has_five_or_nine) {
                count++;
            }
        } else if (num < 0) {
            bool only_zeros = true;
            while (num != 0) {
                int digit = abs(num % 10);
                if (digit > 0) {
                    only_zeros = false;
                    break;
                }
                num /= 10;
            }
            if (!only_zeros) {
                count++;
            }
        }
    }
    return count;
}
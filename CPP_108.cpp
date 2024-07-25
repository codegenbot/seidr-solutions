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
            int sum = 0, i = 1;
            do {
                int digit = abs(num) % 10;
                if (digit != 0 || i == 1) {
                    sum += digit;
                }
                num /= 10;
                i *= 10;
            } while (num > 0);
            has_positive_sum = sum > 0;
        }
        if (has_positive_sum) {
            count++;
        }
    }
    return count;
}
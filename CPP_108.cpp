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
        } else {
            num = -num;
            int sum = 0;
            while (num > 0) {
                int digit = num % 10;
                if (digit != 0 || sum > 0) {
                    sum += digit;
                }
                num /= 10;
            }
        }
        if (sum > 0) {
            has_positive_sum = true;
        }
        if (has_positive_sum) {
            count++;
        }
    }
    return count;
}
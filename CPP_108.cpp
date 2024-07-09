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
            num = -num; // convert to positive
            int sum = 0, digit = 0;
            while (num > 0) {
                digit = num % 10;
                if (digit != 0) {
                    sum += digit;
                }
                num /= 10;
            }
            has_positive_sum = sum > 0;
        }
        if (has_positive_sum) {
            count++;
        }
    }
    return count;
}
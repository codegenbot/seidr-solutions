int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_positive_sum = false;
        int sum = 0;
        if (num < 0) {
            num = -num; // convert to positive
            while (num > 0) {
                int digit = num % 10;
                if (digit != 0 || sum == 0) { // first non-zero digit or initial sum is 0
                    sum += digit;
                }
                num /= 10;
            }
        } else {
            while (num > 0) {
                int digit = num % 10;
                if (digit != 0 || sum == 0) { // first non-zero digit or initial sum is 0
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
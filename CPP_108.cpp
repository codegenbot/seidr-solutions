int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_positive_sum = false;
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            has_positive_sum = sum > 0;
        } else {
            num = -num; // convert to positive
            int sign = 1;
            while (num > 0) {
                if (num % 10 != 0) {
                    sum += num % 10 * sign;
                }
                num /= 10;
                sign = -sign; // alternate between positive and negative signs
            }
            has_positive_sum = sum > 0;
        }
        if (has_positive_sum) count++;
    }
    return count;
}
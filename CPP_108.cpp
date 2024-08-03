int count_nums(vector<int> nums) {
    int count = 0;
    for (auto num : nums) {
        bool has_positive_sum = false;
        if (num < 0) {
            num = -num; // make it positive to calculate signed digits
        }
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 || num / 10 == 0) { // first non-zero digit or only one digit
                has_positive_sum = true;
            }
            num /= 10;
        }
        if (has_positive_sum) {
            count++;
        }
    }
    return count;
}
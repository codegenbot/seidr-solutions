int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_positive_sum = false;
        if (num < 0) {
            num = -num; // make it positive to calculate signed digits
        }
        while (num > 0) {
            int digit = num % 10;
            num /= 10;
            if (digit != 0) {
                has_positive_sum = true;
                break;
            }
        }
        if (has_positive_sum) {
            count++;
        }
    }
    return count;
}
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_positive_sum = false;
        long abs_num = labs(num);
        while (abs_num > 0) {
            int digit = abs_num % 10;
            if (digit != 0 || num < 0 && digit == -1) {
                has_positive_sum = true;
                break;
            }
            abs_num /= 10;
        }
        if (has_positive_sum) {
            count++;
        }
    }
    return count;
}
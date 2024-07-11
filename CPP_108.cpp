int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_sum_greater_than_zero = false;
        long long abs_num = labs(num);
        while (abs_num > 0) {
            long long digit = abs_num % 10;
            if (digit != 0 || num < 0) {
                has_sum_greater_than_zero = true;
                break;
            }
            abs_num /= 10;
        }
        if (has_sum_greater_than_zero) {
            count++;
        }
    }
    return count;
}
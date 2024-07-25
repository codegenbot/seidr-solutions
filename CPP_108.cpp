int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num < 0) {
            num = -num; // convert to positive for calculation
        }
        bool has_positive_sum = false;
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 && digit != 1 && digit != -1) {
                break;
            }
            num /= 10;
            if (digit > 0 || num == 0) {
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
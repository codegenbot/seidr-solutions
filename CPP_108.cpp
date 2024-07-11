int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_positive_sum = false;
        if (num < 0) {
            num = -num; // convert to positive for calculation
        }
        while (num > 9) {
            int digit = num % 10;
            num /= 10;
            if (digit != 0 || num == 0) { // check for non-zero digits and end of number
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
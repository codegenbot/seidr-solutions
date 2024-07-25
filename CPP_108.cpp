int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_positive_sum = false;
        if (num < 0) {
            num = -num; // convert to positive
        }
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 || (num / 10 == 0 && digit == -1)) { // check if it's not zero or the number is single-digit negative
                has_positive_sum = true;
                break;
            }
            num /= 10;
        }
        if (has_positive_sum) {
            count++;
        }
    }
    return count;
}
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num < 0) {
            num = -num; // make it positive to calculate signed digits
        }
        bool has_positive_sum = false;
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 || num / 10 == 0) { // check if the number is not zero
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
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_positive_sum = false;
        long absNum = labs(num);
        while (absNum > 0) {
            int digit = absNum % 10;
            if (digit != 0 || num < 0 && digit == -1) {
                has_positive_sum = true;
                break;
            }
            absNum /= 10;
        }
        if (has_positive_sum) {
            count++;
        }
    }
    return count;
}
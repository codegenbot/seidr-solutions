int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 0) {
            bool has_positive_sum_of_digits = false;
            long absNum = abs(num);
            while (absNum > 0) {
                long digit = absNum % 10;
                if (digit != 0 || digit == -1) {
                    has_positive_sum_of_digits = true;
                    break;
                }
                absNum /= 10;
            }
            if (has_positive_sum_of_digits) {
                count++;
            }
        }
    }
    return count;
}
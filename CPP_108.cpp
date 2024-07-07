Here is the completed code:

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            bool has_positive_sum = false;
            long abs_num = labs(num);
            while (abs_num > 0) {
                int digit = abs_num % 10;
                if (digit != 0 || (abs_num / 10 == 0 && num < 0)) {
                    has_positive_sum = true;
                    break;
                }
                abs_num /= 10;
            }
            if (has_positive_sum) count++;
        }
    }
    return count;
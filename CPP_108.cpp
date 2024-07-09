int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        bool has_positive_sum = false;
        long abs_num = labs(num);
        while (abs_num > 0) {
            int digit = abs_num % 10;
            if (digit != 0 && (digit < 0 ? -1 : 1) > 0) {
                has_positive_sum = true;
                break;
            }
            abs_num /= 10;
        }
        if (has_positive_sum) count++;
    }
    return count;
}
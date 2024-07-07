int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num < 0) {
            int sign = -1;
            num = abs(num);
        } else {
            sign = 1;
        }
        bool has_sum_greater_than_zero = false;
        while (num > 0) {
            int digit = num % 10;
            num /= 10;
            if ((sign * digit) > 0) {
                has_sum_greater_than_zero = true;
                break;
            }
        }
        if (has_sum_greater_than_zero) {
            count++;
        }
    }
    return count;
}
int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        int sign = (num < 0) ? -1 : 1;
        num = abs(num);
        bool has_positive_digit_sum = false;
        while (num > 0) {
            int digit = num % 10;
            if ((sign * digit) > 0) {
                has_positive_digit_sum = true;
                break;
            }
            num /= 10;
        }
        if (has_positive_digit_sum) count++;
    }
    return count;
}
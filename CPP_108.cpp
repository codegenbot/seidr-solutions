int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        bool has_non_zero_digit_sum = false;
        if (num < 0) {
            num = -num; // make it positive for calculation
        }
        while (num > 9) {
            num /= 10;
            has_non_zero_digit_sum |= (num % 10) != 0;
        }
        if ((num > 0 && has_non_zero_digit_sum) || num == 0) {
            count++;
        }
    }
    return count;
}
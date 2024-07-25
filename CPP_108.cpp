int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num < 0)
            num = -num; // convert to positive
        bool has_positive_digit_sum = false;
        while (num > 0) {
            int digit = num % 10;
            num /= 10;
            if (digit > 0) {
                has_positive_digit_sum = true;
                break;
            }
        }
        if (has_positive_digit_sum)
            count++;
    }
    return count;
}
int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num < 0) {
            num = -num; // make it positive to calculate signed digits
        }
        bool has_positive_digit = false;
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0) {
                has_positive_digit = true;
                break;
            }
            num /= 10;
        }
        if (has_positive_digit) {
            count++;
        }
    }
    return count;
}
int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num < 0) {
            num = -num;
        }
        bool sum_digits_positive = false;
        while (num > 0) {
            int digit = num % 10;
            num /= 10;
            if (digit > 0) {
                sum_digits_positive = true;
                break;
            }
        }
        if (sum_digits_positive) {
            count++;
        }
    }
    return count;
}
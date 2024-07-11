int count_nums(vector<int> n) {
    int count = 0;
    for (auto num : n) {
        bool has_positive_sum = false;
        if (num < 0) {
            num = -num; // make it positive to calculate sum of digits
        }
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 || num / 10 == 0) { // skip leading zeros
                has_positive_sum |= (digit > 0);
            }
            num /= 10;
        }
        if (has_positive_sum) {
            count++;
        }
    }
    return count;
}
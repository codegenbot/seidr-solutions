int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num < 0) {
            int sign = -1;
            num = abs(num);
        } else {
            sign = 1;
        }
        bool has_positive_sum = false;
        while (num > 0) {
            int digit = num % 10;
            if (sign * digit > 0) {
                has_positive_sum = true;
                break;
            }
            num /= 10;
        }
        if (!has_positive_sum) continue;
        count++;
    }
    return count;
}
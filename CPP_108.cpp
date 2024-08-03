int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        bool has_positive_sum = false;
        int sign = (num < 0) ? -1 : 1;
        num *= sign;
        while (num != 0) {
            if (num % 10 > 0) {
                has_positive_sum = true;
                break;
            }
            num /= 10;
        }
        if (has_positive_sum) count++;
    }
    return count;
}
int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sign = (num > 0 ? 1 : -1);
        bool has_positive_sum = false;
        long absNum = labs(num);
        while (absNum) {
            int digit = absNum % 10;
            if ((digit > 0 && sign > 0) || (digit < 0 && sign < 0)) {
                has_positive_sum = true;
                break;
            }
            absNum /= 10;
        }
        if (has_positive_sum) count++;
    }
    return count;
}
int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        bool has_positive_sum = false;
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            has_positive_sum = sum > 0;
        } else {
            int sum = 1;
            num = -num;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            has_positive_sum = sum > 0;
        }
        if (has_positive_sum) {
            count++;
        }
    }
    return count;
}
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum_digits = 0;
            int temp = num;
            while (temp > 0) {
                sum_digits += temp % 10;
                temp /= 10;
            }
            if (sum_digits > 0)
                count++;
        } else {
            int sum_digits = 0;
            int temp = -num;
            bool is_negative = true;
            while (temp > 0) {
                sum_digits += temp % 10;
                temp /= 10;
            }
            if (is_negative && sum_digits > 0 || !is_negative && sum_digits >= 1)
                count++;
        }
    }
    return count;
}
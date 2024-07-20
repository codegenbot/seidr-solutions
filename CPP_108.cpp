int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum_of_digits = 0;
            bool is_negative = false;
            if (num < 0) {
                is_negative = true;
                num = -num;
            }
            while (num > 0) {
                sum_of_digits += num % 10;
                num /= 10;
            }
            if (!is_negative && sum_of_digits > 0 || is_negative && sum_of_digits >= 1)
                count++;
        }
    }
    return count;
}
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_positive_sum_of_digits = false;
        if (num >= 0) {
            int sum_of_digits = 0;
            while (num > 0) {
                sum_of_digits += num % 10;
                num /= 10;
            }
            has_positive_sum_of_digits = sum_of_digits > 0;
        } else {
            int sum_of_digits = 0, temp = abs(num);
            while (temp > 0) {
                sum_of_digits += temp % 10;
                temp /= 10;
            }
            if (sum_of_digits > 0) has_positive_sum_of_digits = true;
        }
        if (has_positive_sum_of_digits) count++;
    }
    return count;
}
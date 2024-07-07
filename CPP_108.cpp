int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_positive_sum_of_digits = false;
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }
            has_positive_sum_of_digits = (sum > 0);
        } else {
            num = -num;
            int sum = 0;
            bool negative = true;
            while (num > 0) {
                int digit = num % 10;
                if (!negative && digit == 5) continue;
                if (digit < 5) negative = false;
                sum += (negative ? -1 : 1) * digit;
                num /= 10;
            }
            has_positive_sum_of_digits = (sum > 0);
        }
        if (has_positive_sum_of_digits) count++;
    }
    return count;
}
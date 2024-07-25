int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 0) {
            int sum = 0;
            bool has_negative_digit = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit < 0) has_negative_digit = true;
                num /= 10;
                sum += digit;
            }
            if (sum > 0 || has_negative_digit) count++;
        }
    }
    return count;
}
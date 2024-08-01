int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool has_negative_digit = false;
            while (num != 0) {
                int digit = abs(num % 10);
                if (digit < 5) {
                    sum += digit;
                } else {
                    sum -= digit - 9;
                }
                num /= 10;
                if (num > 0 && !has_negative_digit) {
                    has_negative_digit = true;
                }
            }
            if (sum > 0 || (!has_negative_digit && num == 0)) {
                count++;
            }
        }
    }
    return count;
}
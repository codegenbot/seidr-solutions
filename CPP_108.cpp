int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool is_negative = false;
            while (num != 0) {
                int digit = num % 10;
                num /= 10;
                if (digit < 0) {
                    digit = -digit;
                    is_negative = !is_negative;
                }
                sum += digit;
            }
            if (!is_negative || sum > 0) {
                count++;
            }
        }
    }
    return count;
}
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) count++;
        } else {
            bool hasNonNegativeDigit = false;
            num = abs(num);
            while (num > 0) {
                int digit = num % 10;
                if (digit != 0 || hasNonNegativeDigit) {
                    hasNonNegativeDigit = true;
                    sum += digit;
                }
                num /= 10;
            }
            if (hasNonNegativeDigit && sum > 0) count++;
        }
    }
    return count;
}
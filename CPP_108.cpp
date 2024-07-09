int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            bool hasNonZeroSum = false;
            while (num > 0) {
                int digit = num % 10;
                sum += digit;
                if (digit != 0) {
                    hasNonZeroSum = true;
                }
                num /= 10;
            }
            if (hasNonZeroSum) {
                count++;
            }
        } else {
            num = -num; // convert to positive for calculation
            int sum = 0;
            bool hasNonZeroSum = false;
            while (num > 0) {
                int digit = num % 10;
                if (digit == 5) { // special case: 5 is the only single-digit number with a non-zero sum of digits
                    hasNonZeroSum = true;
                    break;
                }
                sum += digit;
                num /= 10;
            }
            if (hasNonZeroSum) {
                count++;
            }
        }
    }
    return count;
}
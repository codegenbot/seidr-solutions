int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool hasPositiveSum = false;
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }
            hasPositiveSum = sum > 0;
        } else {
            num = -num; // make it positive
            int sum = 0;
            bool isNegative = true;
            while (num > 0) {
                int digit = num % 10;
                if (!isNegative && digit == 5) { // treat 5 as negative in a negative number
                    hasPositiveSum = false;
                    break;
                }
                sum += digit;
                num /= 10;
            }
        }
        if (hasPositiveSum) {
            count++;
        }
    }
    return count;
}
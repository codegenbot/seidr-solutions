int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        bool hasPositiveSum = false;
        if (num < 0) {
            num = -num; // Make number positive to calculate sum of digits
        }
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 || num < 0) { // Check for negative numbers with only one digit
                hasPositiveSum |= (digit > 0);
            }
            num /= 10;
        }
        if (hasPositiveSum) {
            count++;
        }
    }
    return count;
}
int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        int sum = 0;
        bool hasNegativeSign = false;
        if (num < 0) {
            hasNegativeSign = true;
            num = -num;
        }
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0) {
                sum += digit;
            }
            num /= 10;
        }
        if (!hasNegativeSign && sum > 0 || hasNegativeSign && sum >= 1) {
            count++;
        }
    }
    return count;
}
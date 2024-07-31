int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num < 0) {
            num = -num;
        }
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 || num < 0) {
                sum += digit;
            }
            num /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}
int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num < 0) {
            num = -num;
        }
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += (digit >= 5 ? digit - 9 : digit);
            num /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}
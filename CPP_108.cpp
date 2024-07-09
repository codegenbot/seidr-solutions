int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sign = 1;
        if (num < 0) {
            sign = -1;
            num = -num;
        }
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += abs(digit);
            num /= 10;
        }
        if (sum * sign > 0) {
            count++;
        }
    }
    return count;
}
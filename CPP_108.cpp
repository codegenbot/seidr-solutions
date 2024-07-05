int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        bool is_negative = num < 0;
        num = abs(num);
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (is_negative) sum = -sum;
        if (sum > 0) count++;
    }
    return count;
}
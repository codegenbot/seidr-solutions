int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int numDigits = log10(abs(num)) + 1;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        if (num < 0) {
            sum *= -1;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}
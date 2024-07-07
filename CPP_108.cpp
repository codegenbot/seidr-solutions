int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        int sum = 0;
        bool isNegative = false;
        if (num < 0) {
            isNegative = true;
            num = -num;
        }
        while (num > 0) {
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }
        if (isNegative) {
            sum = -sum;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}
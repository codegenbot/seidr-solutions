int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num < 0) {
            num = -num; // make it positive to calculate sum of digits
        }
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum > 0)
            count++;
    }
    return count;
}
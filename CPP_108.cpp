int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int sign = (num < 0) ? -1 : 1;
        num *= sign;
        int sum = 0;
        while (num != 0) {
            sum += abs(num % 10);
            num /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}
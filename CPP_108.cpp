int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int sign = 1;
        if (num < 0) {
            sign = -1;
            num = -num;
        }
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum * sign > 0) {
            count++;
        }
    }
    return count;
}
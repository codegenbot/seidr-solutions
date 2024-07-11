int count_nums(vector<int> nums) {
    int count = 0;
    for (auto num : nums) {
        if (num < 0)
            num = -num;
        long sum = 0;
        while (num > 9) {
            sum += num % 10;
            num /= 10;
        }
        sum += num;
        count += (sum > 0);
    }
    return count;
}
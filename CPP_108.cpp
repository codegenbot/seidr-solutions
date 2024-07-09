int count_nums(vector<int> nums) {
    int count = 0;
    for (auto num : nums) {
        int sign = (num < 0) ? -1 : 1;
        long abs_num = labs(num);
        long sum = 0;
        while (abs_num > 0) {
            sum += abs_num % 10;
            abs_num /= 10;
        }
        if (sign * sum > 0) {
            count++;
        }
    }
    return count;
}
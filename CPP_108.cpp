int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += abs(num % 10);
                num /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0, sign = 1;
            while (num < 0) {
                sum += abs(num % 10);
                num /= 10;
                sign *= -1;
            }
            if (sign * sum > 0)
                count++;
        }
    }
    return count;
}
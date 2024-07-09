int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sign_sum = 0;
            while (num < 0) {
                sign_sum -= num % 10;
                num /= 10;
            }
            if (sign_sum > 0)
                count++;
        }
    }
    return count;
}
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            int sign = 1;
            while (num != 0) {
                int digit = abs(num) % 10;
                sum += (digit >= 5 ? digit - 9 : digit);
                num /= 10;
            }
            if (sum > 0) count++;
        } else if (num < 0) {
            num = -num;
            int sign = -1;
            while (num != 0) {
                int digit = abs(num) % 10;
                sum += (digit >= 5 ? digit - 9 : digit);
                num /= 10;
            }
            if (sum > 0) count++;
        }
    }
    return count;
}
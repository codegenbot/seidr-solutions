int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int sign = 1;
            while (num > 0 || num < 0) {
                int digit = abs(num) % 10;
                num /= 10;
                if (digit != 0) {
                    sum += sign * digit;
                }
                sign = sign * -1; // toggle sign for negative digits
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
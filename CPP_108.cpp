int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = num % 10;
                if (digit < 0) {
                    digit = -digit;
                    negative = !negative;
                }
                sum += digit;
                num /= 10;
            }
            if (!negative && sum > 0 || negative && sum >= 1) {
                count++;
            }
        }
    }
    return count;
}
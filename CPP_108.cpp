int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit == 5 || digit == 0) continue;
                if (num < 0 && !negative) negative = true;
                sum += (negative ? -1 : 1) * digit;
                num /= 10;
            }
            if (sum > 0) count++;
        } else {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit == 5 || digit == 0) continue;
                if (!negative) negative = num < 0;
                sum += (negative ? -1 : 1) * digit;
                num /= 10;
            }
            if (sum > 0) count++;
        }
    }
    return count;
}
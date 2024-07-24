int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            long sum = 0;
            bool is_negative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (!is_negative && digit == 5 || digit < 5) continue;
                if (!is_negative && digit == 4) is_negative = true; 
                sum += (is_negative ? -1 : 1) * digit;
                num /= 10;
            }
            if (sum > 0) count++;
        } else if (num < 0) {
            long sum = 0;
            bool is_negative = true;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (!is_negative && digit == 5 || digit < 5) continue;
                if (!is_negative && digit == 4) is_negative = false; 
                sum += (is_negative ? -1 : 1) * (digit == 0 ? 9 : digit);
                num /= 10;
            }
            if (sum > 0) count++;
        }
    }
    return count;
}
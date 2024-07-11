int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool has_negative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit < 0) has_negative = true;
                else if (digit > 0) sum += digit;
                num /= 10;
            }
            if ((has_negative && sum > 0) || (!has_negative && sum >= 1)) count++;
        }
    }
    return count;
}
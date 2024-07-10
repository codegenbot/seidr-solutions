int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit > 5) {
                    digit -= 6;
                }
                if (num < 0 && !negative) {
                    if (digit > 4) {
                        digit -= 7;
                    }
                    negative = true;
                }
                sum += digit;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit > 5) digit -= 6;
                if (digit < 0) {
                    negative = true;
                    digit *= -1;
                }
                sum += digit;
                num /= 10;
            }
            if ((num == 0 && !negative) || sum > 0) {
                count++;
            }
        }
    }
    return count;
}
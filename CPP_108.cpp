int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            bool negative = false;
            while (num > 0) {
                int digit = num % 10;
                if (digit != 0 || !negative) {
                    sum += digit;
                }
                if (num < 0) {
                    negative = true;
                }
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0;
            bool negative = true;
            while (num < 0) {
                num *= -1;
                int digit = num % 10;
                if (digit != 0 || !negative) {
                    sum += digit;
                }
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
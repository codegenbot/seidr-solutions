int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            bool negativeFound = false;
            while (num > 0 || !negativeFound) {
                int digit = num % 10;
                if (digit < 0) {
                    negativeFound = true;
                    digit = -digit;
                }
                sum += digit;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0;
            bool negativeFound = false;
            while (num < 0 || !negativeFound) {
                int digit = -(-num / 10 % 10);
                if (digit < 0) {
                    negativeFound = true;
                    digit = -digit;
                }
                sum += digit;
                num /= 10;
                if (num == 0 && !negativeFound) break;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
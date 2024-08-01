int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool negativeFound = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit > 5) {
                    digit -= 6;
                }
                num /= 10;
                sum += digit;
                if (digit < 0 && !negativeFound) {
                    negativeFound = true;
                }
            }
            if (sum > 0 || (!negativeFound && sum == 0)) {
                count++;
            }
        } else {
            int sum = 0;
            bool negativeFound = false;
            while (num != 0) {
                int digit = num % 10;
                if (digit < 0) {
                    digit += 7;
                    negativeFound = true;
                }
                num /= 10;
                sum += digit;
            }
            if (sum > 0 || (!negativeFound && sum == 0)) {
                count++;
            }
        }
    }
    return count;
}
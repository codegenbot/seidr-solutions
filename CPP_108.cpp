int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            bool negativeFound = false;
            while (num > 0 || (!negativeFound && num < 0)) {
                int digit = abs(num) % 10;
                if ((digit > 0 && !negativeFound) || (digit == 1 && negativeFound)) {
                    sum += digit;
                }
                num /= 10;
                if (num < 0 && !negativeFound) {
                    negativeFound = true;
                }
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0;
            bool negativeFound = false;
            while (num < 0 || (!negativeFound && num > 0)) {
                int digit = abs(num) % 10;
                if ((digit > 1 && !negativeFound) || (digit == -1 && negativeFound)) {
                    sum += digit;
                }
                num /= 10;
                if (num < 0 && !negativeFound) {
                    negativeFound = true;
                }
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
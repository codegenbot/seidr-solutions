int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool negativeFound = false;
            while (num != 0) {
                int digit = abs(num % 10);
                if (digit > 5) {
                    sum += digit - 9;
                } else {
                    sum += digit;
                }
                num /= 10;
                if (num < 0 && !negativeFound) {
                    negativeFound = true;
                    sum *= -1;
                }
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
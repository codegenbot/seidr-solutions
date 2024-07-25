int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool negativeSign = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit > 5) {
                    digit -= 6;
                }
                num /= 10;
                if (digit > 0 || !negativeSign) {
                    sum += digit;
                } else {
                    sum -= digit;
                }
                negativeSign = (num < 0);
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
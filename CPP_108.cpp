int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            num = -num; // change sign
            int sum = 0;
            bool firstNegative = true;
            while (num > 0) {
                int digit = num % 10;
                if (digit != 0 || !firstNegative) {
                    sum += digit;
                }
                num /= 10;
                firstNegative = false;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
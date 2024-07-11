int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            while (num != 0) {
                int digit = abs(num % 10);
                if (digit != 0) {
                    sum += digit;
                }
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else if (num < 0) {
            num = -num; // make it positive to calculate the sum of digits
            int sum = 0;
            while (num != 0) {
                int digit = num % 10;
                if (digit != 0) {
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
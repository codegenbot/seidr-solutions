int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool isNegative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit != 0 || !isNegative) {
                    sum += digit;
                }
                num /= 10;
                if (num < 0) {
                    isNegative = true;
                }
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
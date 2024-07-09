int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool is_negative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit != 0 || !is_negative) {
                    sum += digit;
                }
                num /= 10;
                if (num < 0) {
                    is_negative = true;
                }
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
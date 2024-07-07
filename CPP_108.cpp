int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 0) {
            int sum = 0;
            bool negative = false;
            while (abs(num) > 0) {
                int digit = abs(num) % 10;
                if (digit != 0 || !negative) {
                    sum += digit;
                }
                num /= 10;
                if (num < 0) {
                    negative = true;
                }
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            do {
                int digit = abs(num) % 10;
                if (digit != 0) {
                    sum += digit;
                } else {
                    break;
                }
                num /= 10;
                if (num < 0 && !negative) {
                    sum *= -1;
                    negative = true;
                }
            } while (num > 0);
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
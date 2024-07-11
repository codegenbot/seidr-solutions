int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool isNegative = false;
            do {
                int digit = abs(num) % 10;
                if (isNegative) {
                    if (digit != 0 || sum == 0) {
                        break;
                    }
                } else if (digit > 0) {
                    sum += digit;
                }
                num /= 10;
                isNegative = (num < 0);
            } while (num != 0);
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
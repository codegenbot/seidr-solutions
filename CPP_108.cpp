int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            bool negativeFound = false;
            while (num > 0 || num < 0) {
                int digit = abs(num) % 10;
                if (digit != 0) {
                    sum += digit;
                } else {
                    if (!negativeFound) {
                        sum -= 1;
                        negativeFound = true;
                    }
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
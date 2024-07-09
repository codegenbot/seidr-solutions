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
            num = -num; // make it positive for calculation
            int sum = 0;
            bool isNegative = true;
            while (num > 0) {
                if (!isNegative) {
                    sum += num % 10;
                }
                num /= 10;
                if (num == 0 && !isNegative) break; // check for negative number
                isNegative = false;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
int count_nums(vector<int> nums) {
    int count = 0;
    for (auto num : nums) {
        bool hasPositiveSum = false;
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            hasPositiveSum = sum > 0;
        } else {
            num = -num;
            int sign = 1;
            while (num > 0) {
                if (num % 10 != 0) {
                    sum = num % 10;
                    hasPositiveSum = true;
                    break;
                }
                num /= 10;
            }
        }
        if (hasPositiveSum) count++;
    }
    return count;
}
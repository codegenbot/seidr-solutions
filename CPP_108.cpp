int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            long absNum = labs(num);
            int sum = 0;
            while (absNum > 0) {
                sum += absNum % 10;
                absNum /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else if (num < 0) {
            long absNum = labs(num);
            int sum = 0, sign = 1;
            while (absNum > 0) {
                sum += absNum % 10 * sign;
                absNum /= 10;
                sign = -sign;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
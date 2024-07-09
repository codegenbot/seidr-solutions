int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int absNum = num;
            while (absNum > 0) {
                sum += absNum % 10;
                absNum /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sign = -1; // -1 for negative numbers
            int sum = 0;
            int absNum = abs(num);
            while (absNum > 0) {
                sum += absNum % 10 * sign;
                absNum /= 10;
                sign *= 1; // switch to positive for non-negative digits
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}
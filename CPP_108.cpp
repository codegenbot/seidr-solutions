int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int absNum = num;
            while (absNum > 0) {
                int digit = absNum % 10;
                sum += digit;
                absNum /= 10;
            }
            if (sum > 0) count++;
        } else {
            int sum = 0, sign = -1;
            int absNum = num;
            while (absNum > 0 || sign == -1) {
                int digit = absNum % 10;
                if (sign == -1 && digit != 0)
                    sign = 1;
                sum += sign * digit;
                absNum /= 10;
            }
            if (sum > 0) count++;
        }
    }
    return count;
}
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum_digits = 0;
            int temp = abs(num);
            while (temp > 0) {
                sum_digits += temp % 10;
                temp /= 10;
            }
            if (sum_digits > 0) {
                count++;
            }
        } else {
            int sum_digits = 0, temp = abs(num), sign = 1;
            while (temp > 0) {
                if (sign == -1 && temp % 10 != 0)
                    break;
                sum_digits += temp % 10 * sign;
                temp /= 10;
                sign = sign * (-1);
            }
            if (sum_digits > 0) {
                count++;
            }
        }
    }
    return count;
}
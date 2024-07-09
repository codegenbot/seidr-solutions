int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int abs_num = num;
            while (abs_num > 0) {
                int digit = abs_num % 10;
                sum += digit;
                abs_num /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0, sign = 1;
            int num_abs = abs(num);
            while (num_abs > 0) {
                int digit = num_abs % 10;
                sum += sign * digit;
                num_abs /= 10;
                if (digit != 0)
                    sign = -sign;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}
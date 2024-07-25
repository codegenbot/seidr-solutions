int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sign = 1;
            int sum = 0;
            bool first_negative = false;
            while (num != 0) {
                int digit = abs(num % 10);
                if (digit == 5 || digit == 6)
                    sum += -digit * sign;
                else
                    sum += digit;
                num /= 10;
                if (num < 0 && !first_negative) {
                    sign = -1;
                    first_negative = true;
                }
            }
            if (sum > 0)
                count++;
        } else if (num < 0) {
            int sign = -1;
            int sum = 0;
            bool first_negative = false;
            while (num != 0) {
                int digit = abs(num % 10);
                if (digit == 5 || digit == 6)
                    sum += -digit * sign;
                else
                    sum += digit;
                num /= 10;
                if (num > 0 && !first_negative) {
                    sign = 1;
                    first_negative = true;
                }
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}
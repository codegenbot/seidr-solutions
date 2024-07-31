int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum_of_digits = 0;
            int n = num;
            while (n > 0) {
                sum_of_digits += n % 10;
                n /= 10;
            }
            if (sum_of_digits > 0)
                count++;
        } else {
            int sum_of_digits = 0;
            int n = -num;
            bool is_negative = true;
            while (n > 0) {
                int digit = n % 10;
                if (digit != 1 && digit != -1)
                    is_negative = false;
                sum_of_digits += digit;
                n /= 10;
            }
            if (sum_of_digits > 0 || !is_negative)
                count++;
        }
    }
    return count;
}
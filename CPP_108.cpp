int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            int abs_num = abs(num);
            while (abs_num > 0) {
                int digit = abs_num % 10;
                if (digit != 0 || num < 0)
                    sum += digit;
                abs_num /= 10;
            }
            if (sum > 0)
                count++;
        } else if (num < 0) {
            int sum = 0;
            int abs_num = abs(num);
            bool negative = true;
            while (abs_num > 0) {
                int digit = abs_num % 10;
                if (digit != 0 || num >= 0)
                    sum += digit * -1;
                abs_num /= 10;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}
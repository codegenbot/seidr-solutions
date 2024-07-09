int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int n = num;
            while (n > 0) {
                int digit = n % 10;
                sum += digit;
                n /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0;
            bool negative = true;
            int n = -num;
            while (n > 0) {
                int digit = n % 10;
                if (negative && digit != 1) {
                    sum += -digit;
                } else {
                    sum += digit;
                    negative = false;
                }
                n /= 10;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}
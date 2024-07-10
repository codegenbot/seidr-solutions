int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            num = -num; // convert to positive
            int sum = 0;
            bool firstNegative = true;
            while (num > 0) {
                int digit = num % 10;
                if (!firstNegative && digit < 0) break; // if we encounter a negative digit after the first, stop counting
                sum += digit;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
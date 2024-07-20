int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            num = -num; // convert to positive
            int sum = 0;
            bool is_negative = true;
            while (num > 0) {
                int digit = num % 10;
                if (is_negative && digit != 1) {
                    break; // stop counting if we find a non-1 negative digit
                }
                sum += digit;
                num /= 10;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}
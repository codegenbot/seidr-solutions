int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum_digits = 0;
            bool has_negative = false;
            char c = abs(num) + '0';
            do {
                if (c < '0' || c > '9') {
                    has_negative = true;
                    break;
                }
                sum_digits += (c - '0');
                c = next(c);
            } while (c != '0');
            if (!has_negative && sum_digits > 0) {
                count++;
            }
        }
    }
    return count;
}
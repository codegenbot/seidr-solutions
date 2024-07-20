int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        bool has_positive_sum = false;
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }
            if (sum > 0) {
                has_positive_sum = true;
            }
        } else {
            bool is_negative = false;
            int sum = 0;
            while (num < 0) {
                int digit = -(-num % 10);
                if (digit < 0) {
                    is_negative = !is_negative;
                }
                sum += digit;
                num /= 10;
            }
            if (!is_negative && sum > 0) {
                has_positive_sum = true;
            } else if (is_negative && sum >= 0) {
                has_positive_sum = true;
            }
        }
        if (has_positive_sum) {
            count++;
        }
    }
    return count;
}
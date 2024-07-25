int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum_of_digits = 0;
            bool has_negative_digit = false;
            while (num > 0 || (!has_negative_digit && num < 0)) {
                int digit = abs(num) % 10;
                if (digit != 0) {
                    sum_of_digits += digit;
                } else {
                    has_negative_digit = true;
                }
                num /= 10;
            }
            if (sum_of_digits > 0) {
                count++;
            }
        }
    }
    return count;
}
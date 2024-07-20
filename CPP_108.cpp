int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num > 0) {
            bool has_non_zero_sum_of_digits = false;
            long n = abs(num);
            while (n > 0) {
                long digit = n % 10;
                n /= 10;
                if (digit != 0) {
                    has_non_zero_sum_of_digits = true;
                    break;
                }
            }
            if (has_non_zero_sum_of_digits) {
                count++;
            }
        }
    }
    return count;
}
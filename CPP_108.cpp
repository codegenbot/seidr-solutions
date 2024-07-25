int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        bool has_positive_sum_of_digits = false;
        if (num >= 0) {
            int sum_of_digits = 0;
            while (num > 0) {
                sum_of_digits += num % 10;
                num /= 10;
            }
            if (sum_of_digits > 0) {
                has_positive_sum_of_digits = true;
            }
        } else {
            int sum_of_digits = 0;
            do {
                sum_of_digits -= num % 10;
                num /= 10;
                if (!num) break;
            } while (1);
            if (sum_of_digits > 0) {
                has_positive_sum_of_digits = true;
            }
        }
        if (has_positive_sum_of_digits) {
            count++;
        }
    }
    return count;
}
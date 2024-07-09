int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        bool has_positive_sum_of_digits = false;
        if (num >= 0) {
            int sum_of_digits = 0;
            int temp = num;
            while (temp > 0) {
                sum_of_digits += temp % 10;
                temp /= 10;
            }
            if (sum_of_digits > 0) {
                has_positive_sum_of_digits = true;
            }
        } else {
            int sum_of_digits = 0, sign = 1;
            int temp = abs(num);
            while (temp > 0) {
                sum_of_digits += sign * (temp % 10);
                temp /= 10;
            }
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
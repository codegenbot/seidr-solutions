int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        bool has_positive_sum = false;
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                has_positive_sum = true;
            }
        } else {
            num = -num;
            int sum = 0;
            bool is_negative = false;
            while (num > 0) {
                if (!is_negative && num % 10 < 0) {
                    is_negative = true;
                    sum -= num % 10;
                } else {
                    sum += num % 10;
                }
                num /= 10;
            }
            if (sum > 0) {
                has_positive_sum = true;
            }
        }
        if (has_positive_sum) {
            count++;
        }
    }
    return count;
}
int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num > 0) {
            bool has_positive_sum = false;
            while (num != 0) {
                int digit = abs(num % 10);
                if (digit > 0) {
                    has_positive_sum = true;
                    break;
                }
                num /= 10;
            }
            if (has_positive_sum) {
                count++;
            }
        } else {
            bool has_positive_sum = false;
            while (num != 0) {
                int digit = abs(num % 10);
                if (digit > 0) {
                    has_positive_sum = true;
                    break;
                }
                num /= 10;
            }
            if (has_positive_sum) {
                count++;
            }
        }
    }
    return count;
}
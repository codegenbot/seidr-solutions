int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_positive_sum = false;
        if (num >= 0) {
            int sum = 0;
            int temp = num;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum > 0) {
                has_positive_sum = true;
            }
        } else {
            int sum = 0;
            int temp = -num;
            bool is_negative = false;
            while (temp > 0) {
                if (is_negative) {
                    sum -= temp % 10;
                } else {
                    sum += temp % 10;
                }
                temp /= 10;
                is_negative = !is_negative;
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
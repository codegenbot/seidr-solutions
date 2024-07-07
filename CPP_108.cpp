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
            has_positive_sum = sum > 0;
        } else {
            int sum = 0, sign = -1;
            int temp = abs(num);
            while (temp > 0) {
                if ((sign * (temp % 10)) > 0) {
                    sum += temp % 10;
                }
                temp /= 10;
            }
            has_positive_sum = sum > 0;
        }
        if (has_positive_sum) count++;
    }
    return count;
}
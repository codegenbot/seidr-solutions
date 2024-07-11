int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            bool has_positive_sum = false;
            int sum = 0, temp = abs(num);
            while (temp != 0) {
                int digit = temp % 10;
                sum += digit;
                temp /= 10;
                if (digit > 0) {
                    has_positive_sum = true;
                    break;
                }
            }
            if (has_positive_sum) count++;
        } else if (num < 0) {
            bool has_positive_sum = false;
            int sum = 0, temp = abs(num);
            while (temp != 0) {
                int digit = temp % 10;
                sum += digit;
                temp /= 10;
                if (digit > 0) {
                    has_positive_sum = true;
                    break;
                }
            }
            if (has_positive_sum) count++;
        }
    }
    return count;
}
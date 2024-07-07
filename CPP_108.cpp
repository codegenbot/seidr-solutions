int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum_of_digits = 0;
            int abs_num = abs(num);
            while (abs_num > 0) {
                sum_of_digits += abs_num % 10;
                abs_num /= 10;
            }
            if (sum_of_digits > 0)
                count++;
        } else {
            int sum_of_digits = 0, temp = num;
            do {
                sum_of_digits -= temp % 10;
                temp /= 10;
            } while (temp > 0);
            if (sum_of_digits > 0)
                count++;
        }
    }
    return count;
}
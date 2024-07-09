int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int sum_of_digits = 0;
        if (num < 0) {
            while (abs(num) > 0) {
                sum_of_digits += abs(num) % 10;
                num /= 10;
            }
        } else {
            while (num > 0) {
                sum_of_digits += num % 10;
                num /= 10;
            }
        }
        if (sum_of_digits > 0) {
            count++;
        }
    }
    return count;
}
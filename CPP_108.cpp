int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int sum_of_digits = 0;
        bool negative = false;
        if (num < 0) {
            negative = true;
            num = -num;
        }
        while (num > 0) {
            sum_of_digits += num % 10;
            num /= 10;
        }
        if ((negative && sum_of_digits > 0) || (!negative && sum_of_digits > 0)) {
            count++;
        }
    }
    return count;
}
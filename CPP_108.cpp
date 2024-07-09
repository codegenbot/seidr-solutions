int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int sign = abs(num) / pow(10, floor(log10(abs(num)))) * -1 + 1;
        int sum_digits = 0;
        while (abs(num)) {
            sum_digits += abs(num) % 10;
            num /= 10;
        }
        if (sign == 1 && sum_digits > 0 || sign == -1 && sum_digits < 0)
            count++;
    }
    return count;
}
Here is the completed code:

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int sign = abs(num) / pow(10, floor(log10(abs(num)))) * ((num < 0) ? -1 : 1);
        int sum_digits = 0;
        int temp = abs(num);
        while (temp > 0) {
            sum_digits += temp % 10;
            temp /= 10;
        }
        if (sum_digits > 0 && sign * sum_digits > 0) {
            count++;
        }
    }
    return count;
}
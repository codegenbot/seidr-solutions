int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num < 0) {
            num = -num; // make it positive to calculate sum of digits correctly
        }
        int sum = 0;
        do {
            sum += abs(num % 10); // add the last digit
            num /= 10; // remove the last digit
        } while (num != 0);
        if (sum > 0) {
            count++;
        }
    }
    return count;
}
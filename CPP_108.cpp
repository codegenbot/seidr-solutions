int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int sum = 0;
        bool has_negative = false;
        if (num < 0) {
            while (num < 0) {
                num += 10;
                has_negative = true;
            }
        }
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if ((has_negative && sum > 0) || (!has_negative && sum >= 0)) {
            count++;
        }
    }
    return count;
}
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) count++;
        } else {
            num = -num; // convert negative number to positive
            int sum = 0;
            bool is_negative = false;
            while (num > 0) {
                if (num % 10 != 0) is_negative = true;
                sum += num % 10;
                num /= 10;
            }
            if (!is_negative && sum > 0) count++;
        }
    }
    return count;
}
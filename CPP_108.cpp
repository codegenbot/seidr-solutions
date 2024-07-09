int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int sum = 0;
        bool has_negative = false;
        string str_num = to_string(num);
        if (num < 0) {
            has_negative = true;
        }
        for (char c : str_num) {
            int digit = c - '0';
            if (has_negative && digit == 1 || digit > 0) {
                sum += digit;
            } else if (!has_negative && digit > 0) {
                sum += digit;
            }
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}
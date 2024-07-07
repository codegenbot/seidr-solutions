int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num > 0) {
            int sum = 0;
            bool has_negative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit < 0) {
                    has_negative = true;
                    break;
                }
                sum += digit;
                num /= 10;
            }
            if (has_negative && sum > 0) {
                count++;
            } else if (!has_negative && sum > 0) {
                count++;
            }
        }
    }
    return count;
}
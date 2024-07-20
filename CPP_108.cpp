int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            bool negative = false;
            while (num > 0 || (!negative && num < 0)) {
                int digit = abs(num) % 10;
                if (digit != 0) {
                    sum += digit;
                }
                if (num < 0) {
                    negative = true;
                }
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0;
            bool negative = true;
            while (num < 0 || (!negative && num >= 0)) {
                int digit = abs(num) % 10;
                if (digit != 0) {
                    sum += (digit == 5 ? -1 : 1);
                }
                num /= 10;
                if (num >= 0) {
                    negative = false;
                }
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
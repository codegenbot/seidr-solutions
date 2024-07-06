int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = abs(num % 10);
                if (digit != 0 || !negative) {
                    sum += digit;
                }
                num /= 10;
                if (num < 0) {
                    negative = true;
                }
            }
            if (sum > 0) {
                count++;
            }
        } else if (num < 0) {
            int sum = 0;
            bool negative = true;
            while (num != 0) {
                int digit = abs(num % 10);
                if (!negative || digit != 0) {
                    sum += digit;
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
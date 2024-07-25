int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0;
            bool negative = false;
            while (num > 0 || (!negative && num < 0)) {
                int digit = abs(num) % 10;
                if (num < 0) {
                    negative = true;
                    digit *= -1;
                }
                sum += digit;
                num /= 10;
            }
            if (sum > 0) count++;
        } else {
            int sum = 0;
            bool negative = true;
            while (num < 0 || (!negative && num > 0)) {
                int digit = abs(num) % 10;
                if (num > 0) {
                    negative = false;
                    digit *= -1;
                }
                sum += digit;
                num /= 10;
            }
            if (sum > 0) count++;
        }
    }
    return count;
}
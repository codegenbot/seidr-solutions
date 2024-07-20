int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (num < 0 && !negative) {
                    negative = true;
                    digit = -digit;
                }
                sum += digit;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
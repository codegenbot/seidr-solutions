int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            do {
                int digit = abs(num) % 10;
                if (digit != 0 || !negative) {
                    sum += digit;
                }
                if (num < 0 && num % 10 != -1) {
                    negative = true;
                }
                num /= 10;
            } while (num);
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
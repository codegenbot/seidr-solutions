int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0;
            bool negative = false;
            while (num > 0 || (num == 0 && !negative)) {
                int digit = num % 10;
                if (digit != 0) {
                    sum += digit;
                } else if (!negative) {
                    negative = true;
                    sum -= 1;
                }
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
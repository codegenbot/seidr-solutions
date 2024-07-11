int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0;
            bool negative = false;
            while (num > 0 || (!negative && num < 0)) {
                int digit = abs(num) % 10;
                sum += digit;
                if (num < 0) {
                    if (digit != 0) {
                        negative = true;
                        sum *= -1;
                    }
                    num /= 10;
                } else {
                    num /= 10;
                }
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
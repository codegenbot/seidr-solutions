int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0, sign = 1;
            bool seenNegativeSign = false;
            do {
                if (num < 0) {
                    sign = -sign;
                    seenNegativeSign = true;
                }
                sum += num % 10 * sign;
                num /= 10;
            } while (num != 0);
            if (seenNegativeSign && sum > 0)
                count++;
        }
    }
    return count;
}
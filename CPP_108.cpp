int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += abs(num % 10);
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0, sign = -1;
            bool foundNonZero = false;
            while (num < 0) {
                if (abs(num) % 10 != 0) {
                    sum += abs(num % 10);
                    foundNonZero = true;
                }
                num /= 10;
            }
            if (foundNonZero && sum > 0) {
                count++;
            }
        }
    }
    return count;
}
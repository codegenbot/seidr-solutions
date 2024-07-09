int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
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
            num = -num; // convert to positive
            int sum = 0;
            bool negativeSign = true;
            while (num > 0) {
                if (negativeSign) {
                    sum -= abs(num % 10);
                } else {
                    sum += abs(num % 10);
                }
                num /= 10;
                negativeSign = !negativeSign; // toggle sign
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
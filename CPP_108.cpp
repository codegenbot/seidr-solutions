int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }
            if (sum > 0) count++;
        } else {
            int sum = 0, sign = 1;
            num = abs(num);
            while (num > 0) {
                int digit = num % 10;
                sum += sign * digit;
                num /= 10;
            }
            if (sum > 0) count++;
        }
    }
    return count;
}
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
            int sum = 0, n = abs(num);
            bool is_negative = true;
            while (n > 0) {
                sum += abs(n % 10);
                n /= 10;
            }
            if (is_negative && sum > 0 || !is_negative && sum >= 1) {
                count++;
            }
        }
    }
    return count;
}
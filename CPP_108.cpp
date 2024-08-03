int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            int n = num;
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0, sign = 1;
            int n = abs(num);
            while (n > 0) {
                if (n % 10 != 0) {
                    sum += sign * (n % 10);
                }
                n /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
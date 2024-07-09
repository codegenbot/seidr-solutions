int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            int n = num;
            while (n > 0) {
                int digit = n % 10;
                sum += digit;
                n /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            num = -num; // convert to positive
            int sum = 0;
            int n = num;
            while (n > 0) {
                int digit = n % 10;
                if (digit != 0 || sum > 0) {
                    sum += digit;
                }
                n /= 10;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}
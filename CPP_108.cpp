int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int n = num;
            while (n > 0) {
                sum += abs(n % 10);
                n /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0, sign = 1;
            int n = -num;
            while (n > 0) {
                if (sign == 1) {
                    sum += abs(n % 10);
                    n /= 10;
                } else {
                    sign = -1;
                    n--;
                }
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}
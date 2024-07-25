int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
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
            int sum = 0, n = abs(num);
            bool negative = true;
            while (n > 0) {
                if (negative && n % 10 < 0) {
                    sum -= n % 10;
                } else {
                    sum += n % 10;
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
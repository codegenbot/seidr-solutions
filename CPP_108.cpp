Here is the completed code:

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            long n = abs(num);
            long sum = 0;
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            long n = -num;
            long sum = 1;
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}
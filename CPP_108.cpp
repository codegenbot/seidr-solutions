int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            bool negative = false;
            do {
                sum += abs(num % 10);
                num /= 10;
                if (!negative && num < 0) {
                    sum -= num % 10;
                    num /= 10;
                    negative = true;
                }
            } while (num != 0);
            if (sum > 0) count++;
        }
    }
    return count;
}
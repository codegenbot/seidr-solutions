int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int temp = num;
            while (temp > 0) {
                int digit = temp % 10;
                sum += (digit > 0) ? 1 : -1;
                temp /= 10;
            }
            if (sum > 0) count++;
        } else {
            int sum = 0;
            int temp = abs(num);
            while (temp > 0) {
                int digit = temp % 10;
                sum += (digit > 0) ? 1 : -1;
                temp /= 10;
            }
            if (sum > 0) count++;
        }
    }
    return count;
}
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit == 5 || digit == 0) continue;
                sum += (digit > 5 ? digit - 9 : digit);
                num /= 10;
                if (!negative && digit < 0) negative = true;
            }
            if ((sum + (negative ? -1 : 1)) > 0) count++;
        }
    }
    return count;
}
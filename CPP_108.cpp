int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit > 5) digit -= 9;
                if (num < 0 && !negative) negative = true;
                num /= 10;
                sum += digit;
            }
            if ((sum + (negative ? -1 : 0)) > 0) count++;
        }
    }
    return count;
}
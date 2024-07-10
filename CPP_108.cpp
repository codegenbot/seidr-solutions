int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool sign = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (!sign && digit == 5) {
                    sum += -1 * (digit - 4);
                } else if (!sign && digit > 5) {
                    sum -= digit - 5;
                } else if (sign) {
                    sum -= digit;
                } else {
                    sum += digit;
                }
                sign = !sign;
                num /= 10;
            }
            if (sum > 0) count++;
        }
    }
    return count;
}
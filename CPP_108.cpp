int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool sign = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (!sign && digit == 5) {
                    sum += -1 * digit;
                    sign = true;
                } else if (sign && digit == 5) {
                    sum += digit;
                    sign = false;
                } else {
                    sum += digit;
                }
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
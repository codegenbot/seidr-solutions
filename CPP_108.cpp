int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool sign = true;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (!sign && digit > 0) {
                    sum += digit;
                } else if (sign && digit < 0) {
                    sum -= digit;
                    sign = false;
                } else if (sign && digit >= 0 || !sign && digit <= 0) {
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
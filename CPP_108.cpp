int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool sign = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (!sign && digit != 0) sign = true;
                sum += sign ? digit : -digit;
                num /= 10;
            }
            if (sum > 0) count++;
        } else if (num < 0) {
            int sum = 0;
            bool sign = true;
            num = abs(num);
            while (num != 0) {
                int digit = num % 10;
                if (!sign && digit != 0) sign = false;
                sum += sign ? digit : -digit;
                num /= 10;
            }
            if (sum > 0) count++;
        }
    }
    return count;
}
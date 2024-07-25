int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0, abs_num = 0;
            do {
                abs_num *= 10;
                abs_num -= num % 10;
                num /= 10;
                if (num == 0 && abs_num < 0) break;
            } while (num > 0);
            if (abs_num > 0) {
                count++;
            }
        }
    }
    return count;
}
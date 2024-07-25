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
            int sum = 0, num_copy = abs(num);
            bool is_negative = true;
            while (num_copy > 0) {
                if (is_negative) {
                    if (num_copy % 10 < 0) {
                        sum += num_copy % 10 + 10;
                    } else {
                        sum += num_copy % 10;
                    }
                } else {
                    sum += num_copy % 10;
                }
                num_copy /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
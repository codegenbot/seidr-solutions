int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0, sign = -1;
            bool found_non_zero = false;
            do {
                sum += abs(num) % 10;
                num /= 10;
                if (abs(num) != 0 || !found_non_zero)
                    found_non_zero = true;
            } while (num > 0);
            if (sign * sum > 0 && found_non_zero)
                count++;
        }
    }
    return count;
}
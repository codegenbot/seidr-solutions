int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            do {
                int digit = abs(num) % 10;
                if (negative) {
                    sum -= digit;
                } else {
                    sum += digit;
                }
                num /= 10;
                negative = digit == 5 || digit == 4;
            } while (num);
            if (sum > 0) count++;
        }
    }
    return count;
}
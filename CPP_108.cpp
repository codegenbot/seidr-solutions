int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num < 0) {
            int sum = 0;
            bool has_negative = false;
            while (abs(num) > 0) {
                int digit = abs(num) % 10;
                if (digit == 5 || digit == 6) {
                    sum += digit - 5;
                } else {
                    sum += digit;
                }
                num /= 10;
                if (num < 0 && !has_negative) {
                    has_negative = true;
                    sum *= -1;
                }
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0;
            bool has_zero = false;
            while (num > 0) {
                int digit = num % 10;
                sum += digit;
                num /= 10;
                if (digit == 0 && !has_zero) {
                    has_zero = true;
                }
            }
            if (sum > 0 || has_zero) {
                count++;
            }
        }
    }
    return count;
}
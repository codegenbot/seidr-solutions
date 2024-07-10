int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }
            if (sum > 0) count++;
        } else {
            num = -num; // convert to positive
            int sum = 0;
            bool is_negative = false;
            while (num > 0) {
                int digit = num % 10;
                if (is_negative) digit = -digit;
                sum += digit;
                num /= 10;
                is_negative = !is_negative; // toggle sign
            }
            if (sum > 0) count++;
        }
    }
    return count;
}
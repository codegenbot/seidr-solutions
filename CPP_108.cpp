int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num > 0) {
            int sum_of_digits = 0;
            bool negative = false;
            while (num != 0) {
                int digit = abs(num % 10);
                if (!negative && digit > 5) {
                    sum_of_digits += digit - 9;
                } else {
                    sum_of_digits += digit;
                }
                num /= 10;
                if (num < 0) {
                    negative = true;
                }
            }
            if (sum_of_digits > 0) {
                count++;
            }
        }
    }
    return count;
}
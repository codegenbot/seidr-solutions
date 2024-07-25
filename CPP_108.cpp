int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            int abs_num = abs(num);
            while (abs_num > 0) {
                int digit = abs_num % 10;
                sum += digit;
                abs_num /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0, i = 1;
            int abs_num = num;
            do {
                int digit = abs_num % 10;
                if (digit != 0) {
                    sum += digit * i;
                }
                abs_num /= 10;
                i *= 10;
            } while (abs_num > 0);
            if (sum > 0)
                count++;
        }
    }
    return count;
}
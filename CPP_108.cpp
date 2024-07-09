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
            if (sum > 0) {
                count++;
            }
        } else {
            num = -num;
            int sum = 0;
            bool negative = true;
            while (num > 0) {
                int digit = num % 10;
                if (negative) {
                    if (digit != 1) {
                        sum += digit;
                    } else {
                        sum++;
                        negative = false;
                    }
                } else {
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
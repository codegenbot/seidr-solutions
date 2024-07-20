int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
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
            num = -num; // make the number positive for calculation
            int sum = 0;
            bool isNegative = true;
            while (num > 0) {
                int digit = num % 10;
                if (isNegative) {
                    if (digit != 1) {
                        sum += digit;
                    } else {
                        sum++;
                        isNegative = false;
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
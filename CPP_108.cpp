int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0;
            int temp = num;
            while (temp != 0) {
                int digit = temp % 10;
                sum += (digit > 0) ? digit : -digit;
                temp /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0, i = 1;
            while (num != 0) {
                int digit = num % 10;
                if (i == 1) {
                    sum += (digit < 0) ? -digit : digit;
                } else {
                    sum += abs(digit);
                }
                num /= 10;
                i *= -1;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}
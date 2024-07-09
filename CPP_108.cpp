int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num < 0) {
            int sum = 0;
            bool hasNegative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit > 5) {
                    digit -= 6;
                }
                num /= 10;
                if (digit < 0) {
                    hasNegative = true;
                    break;
                }
                sum += digit;
            }
            if (!hasNegative && sum > 0) {
                count++;
            } else if (hasNegative) {
                while (num != 0) {
                    int digit = num % 10;
                    if (digit < 0) {
                        digit += 6;
                    }
                    num /= 10;
                    sum += digit;
                }
                if (sum > 0) {
                    count++;
                }
            }
        } else {
            int sum = 0;
            while (num != 0) {
                int digit = num % 10;
                num /= 10;
                sum += digit;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
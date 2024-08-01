int count_nums(vector<int> n) {
    int count = 0;
    for (auto num : n) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            bool hasPositiveDigit = false;
            num = -num;
            int sum = 0;
            while (num > 0) {
                int digit = num % 10;
                if (digit > 0) {
                    hasPositiveDigit = true;
                    break;
                }
                num /= 10;
            }
            if (hasPositiveDigit)
                count++;
        }
    }
    return count;
}
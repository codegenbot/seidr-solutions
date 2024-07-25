int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num > 0) {
            bool hasPositiveSumOfDigits = false;
            int sumOfDigits = 0;
            do {
                int digit = abs(num) % 10;
                sumOfDigits += digit;
                if (digit != 0 || num < 0) {
                    hasPositiveSumOfDigits = true;
                }
                num /= 10;
            } while (num > 0);
            if (hasPositiveSumOfDigits) {
                count++;
            }
        }
    }
    return count;
}
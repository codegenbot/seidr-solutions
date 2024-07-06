int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        bool hasPositiveSumOfDigits = false;
        if (num >= 0) {
            int sumOfDigits = 0;
            while (num > 0) {
                sumOfDigits += num % 10;
                num /= 10;
            }
            hasPositiveSumOfDigits = sumOfDigits > 0;
        } else {
            int signDigit = abs(num) % 10;
            if (signDigit != 0) {
                hasPositiveSumOfDigits = true;
            }
            num = -abs(num) / 10;
            while (num > 0) {
                sumOfDigits += num % 10;
                num /= 10;
            }
            if (sumOfDigits > 0) {
                hasPositiveSumOfDigits = true;
            }
        }
        if (hasPositiveSumOfDigits) {
            count++;
        }
    }
    return count;
}
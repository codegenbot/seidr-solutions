int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = 0; i < digits.size(); i++) {
        if (!doubleNext) {
            sum += digits[i];
        } else {
            int doubledDigit = digits[i] * 2;
            if (doubledDigit > 9) {
                sum += doubledDigit - 9;
            } else {
                sum += doubledDigit;
            }
        }

        doubleNext = !doubleNext;
    }

    return sum;
}
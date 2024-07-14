int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = 0; i < 16; i++) {
        if (doubleNext) {
            int digit = digits[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += digits[i];
        }

        doubleNext = !doubleNext;
    }

    return sum;
}
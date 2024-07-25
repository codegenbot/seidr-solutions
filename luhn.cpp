int luhn(std::vector<int> digits) {
    int sum = 0;
    bool isSecondDigit = true;

    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if (isSecondDigit) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        isSecondDigit = !isSecondDigit;
    }

    return sum;
}
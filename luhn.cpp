int luhn(const vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); ++i) {
        if ((i % 2) == 1) {
            int doubleDigit = digits[i] * 2;
            if (doubleDigit > 9)
                sum += doubleDigit - 9;
            else
                sum += doubleDigit;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}
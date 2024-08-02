int luhn(vector<int> digits) {
    int sum = 0;
    bool alternate = false;

    for (int i = 0; i < digits.size(); ++i) {
        int digit = digits[i] * (alternate ? 2 : 1);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
        alternate = !alternate;
    }

    return sum;
}
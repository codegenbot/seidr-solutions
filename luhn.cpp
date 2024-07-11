int luhn(std::vector<int> digits) {
    int sum = 0;
    bool alternate = false;

    for (int i = digits.size() - 1; i >= 0; --i) {
        if (alternate) {
            int digit = digits[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += digits[i];
        }
        alternate = !alternate;
    }

    return sum;
}
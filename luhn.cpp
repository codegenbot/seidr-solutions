int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); ++i) {
        int digit = i % 2 == 1 ? digits[i] * 2 : digits[i];
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
    }

    return sum;
}
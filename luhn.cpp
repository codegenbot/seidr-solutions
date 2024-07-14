int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = 0; i < digits.size(); ++i) {
        int digit = digits[i];

        if (doubleNext && i % 2 == 0) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
        doubleNext = !doubleNext;
    }

    return sum;
}
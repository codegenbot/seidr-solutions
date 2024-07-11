int luhn(const std::vector<int>& cardNumber) {
    int sum = 0;
    bool isDouble = false;

    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int digit = (isDouble ? cardNumber[i] * 2 : cardNumber[i]);

        if (digit > 9) {
            digit -= 9;
        }

        sum += digit;
        isDouble = !isDouble;
    }

    return sum;
}
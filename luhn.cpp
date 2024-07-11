int luhn(const std::vector<int>& cardNumber) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        if ((cardNumber[i] * (doubleNext ? 2 : 1)) > 9) {
            digit -= 9;
        }
        sum += cardNumber[i];
        doubleNext = !doubleNext;
    }

    return sum % 10 == 0;
}
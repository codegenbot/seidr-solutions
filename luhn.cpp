int luhn(const vector<int>& cardNumber) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        if (doubleNext) {
            int digit = cardNumber[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
            doubleNext = false;
        } else {
            sum += cardNumber[i];
            doubleNext = true;
        }
    }

    return sum;
}
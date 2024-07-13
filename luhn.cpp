int luhn(const vector<int>& cardNumber) {
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int digit = cardNumber[i];
        if ((cardNumber.size() - i) % 2 == 1) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
    }
    return sum;
}
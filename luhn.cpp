int luhn(const std::vector<long long>& cardNumber) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        long long digit = cardNumber[i];

        if ((cardNumber.size() % 2 == 0 && i % 2 != 0) || (cardNumber.size() % 2 != 0 && i % 2 == 0)) { 
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += static_cast<int>(digit);
    }

    return sum;
}
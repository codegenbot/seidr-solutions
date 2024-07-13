int luhn(std::vector<int>& card) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = card.size() - 1; i >= 0; --i) {
        if (doubleNext) {
            int digit = card[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += card[i];
        }

        doubleNext = !doubleNext;
    }

    return sum;
}
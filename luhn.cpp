int luhn(std::vector<int> card) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = card.size() - 1; i >= 0; --i) {
        int digit = card[i];

        if (doubleNext) {
            digit = (digit * 2) % 10 + ((digit * 2) / 10);
        }

        sum += digit;

        doubleNext = !doubleNext;
    }

    return sum;
}
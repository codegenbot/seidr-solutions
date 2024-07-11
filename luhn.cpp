int luhn(vector<int> &card) {
    int sum = 0;
    for (int i = card.size() - 1; i >= 0; --i) {
        if (i % 2 == 1) {
            int digit = card[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += card[i];
        }
    }
    return sum;
}
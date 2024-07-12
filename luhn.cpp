int luhn(vector<int> card) {
    int sum = 0;
    for (int i = card.size() - 1; i >= 0; --i) {
        if ((i % 2 != 0)) {
            if ((card[i] * 2) > 9) {
                sum += (card[i] * 2) - 9;
            } else {
                sum += card[i] * 2;
            }
        } else {
            sum += card[i];
        }
    }
    return sum;
}
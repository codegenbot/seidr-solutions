int luhn(vector<int> card) {
    int sum = 0;
    for (int i = card.size() - 1; i >= 0; --i) {
        if ((i % 2 == 0) && (card[i] * 2) > 9) {
            sum += (card[i] * 2) - 9;
        } else if (i % 2 != 0) {
            sum += card[i];
        } else {
            sum += card[i] * 2;
        }
    }
    return sum;
}
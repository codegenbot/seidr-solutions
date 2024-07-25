int luhn(std::vector<int> card) {
    int sum = 0;
    for (int i = 0; i < card.size(); ++i) {
        if ((card[i] * 2) > 9) {
            sum += (card[i] * 2) - 9;
        } else {
            sum += card[i] * 2;
        }
        if (i % 2 != 0 && i < card.size() - 1) {
            sum += card[i];
        }
    }
    return sum;
}
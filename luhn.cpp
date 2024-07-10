int luhn(vector<int> card_num) {
    int sum = 0;
    for (int i = 0; i < card_num.size(); i++) {
        if ((i % 2) == 1) {
            int doubleDigit = card_num[i] * 2;
            if (doubleDigit > 9) {
                doubleDigit -= 9;
            }
            sum += doubleDigit;
        } else {
            sum += card_num[i];
        }
    }
    return sum;
}
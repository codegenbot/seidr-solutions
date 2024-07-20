int luhn(vector<int> card) {
    int sum = 0;
    bool alternate = false;

    for (int i = card.size() - 1; i >= 0; --i) {
        if (alternate) {
            int doubled = card[i] * 2;
            if (doubled > 9) {
                sum += (doubled % 10) + 1;
            } else {
                sum += doubled;
            }
        } else {
            sum += card[i];
        }
        alternate = !alternate;
    }

    return sum;
}
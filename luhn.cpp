int luhnCheck(vector<int> cardNumber) {
    int sum = 0;
    for (int i = 0; i < cardNumber.size(); i++) {
        if (i % 2 == 1) {
            cardNumber[i] *= 2;
            if (cardNumber[i] > 9) {
                cardNumber[i] -= 9;
            }
        }
    }
    for (int num : cardNumber) {
        sum += num;
    }
    return sum;
}
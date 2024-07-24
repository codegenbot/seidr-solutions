int luhn(vector<int>& cardNumber) {
    int sum = 0;
    for (int i = 0; i < cardNumber.size(); i++) {
        if (i % 2 == 1) {
            int doubled = cardNumber[i] * 2;
            if (doubled > 9) {
                sum += (doubled - 9);
            } else {
                sum += doubled;
            }
        } else {
            sum += cardNumber[i];
        }
    }
    return sum;
}
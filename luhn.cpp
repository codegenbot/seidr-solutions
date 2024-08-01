int luhn(int n, const vector<int>& cardNumber) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = 15; i >= 0; --i) {
        if ((cardNumber[i] * 2) > 9) {
            sum += (cardNumber[i] * 2) - 9;
        } else if (doubleNext) {
            sum += cardNumber[i] * 2;
        } else {
            sum += cardNumber[i];
        }
        doubleNext = !doubleNext;
    }
    return sum;
}
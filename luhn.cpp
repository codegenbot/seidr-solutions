int luhn(vector<int> cardNum) {
    int sum = 0;
    bool alternate = false;

    for (int i = cardNum.size() - 1; i >= 0; i--) {
        if (!alternate) {
            sum += cardNum[i];
        } else {
            int doubleVal = cardNum[i] * 2;
            sum += (doubleVal > 9 ? doubleVal - 9 : doubleVal);
        }
        alternate = !alternate;
    }

    return sum;
}
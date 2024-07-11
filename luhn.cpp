int luhn(vector<int> cardNum) {
    int sum = 0;
    bool isSecond = false;

    for (int i = cardNum.size() - 1; i >= 0; i--) {
        if (isSecond) {
            int val = cardNum[i] * 2;
            if (val > 9) val -= 9;
            sum += val;
        } else {
            sum += cardNum[i];
        }
        isSecond = !isSecond;
    }

    return sum;
}
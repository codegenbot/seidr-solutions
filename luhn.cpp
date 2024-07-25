int luhn(const vector<int>& cardNum) {
    int sum = 0;
    bool alternate = false;

    for (int i = cardNum.size() - 1; i >= 0; --i) {
        int digit = cardNum[i] * (alternate ? 2 : 1);

        if (digit > 9) {
            digit -= 9;
        }

        sum += digit;
        alternate = !alternate;
    }

    return sum;
}
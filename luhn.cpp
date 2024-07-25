int luhn(vector<int>& creditCardNumber) {
    int sum = 0;
    bool doubleNext = false;

    for (int i : creditCardNumber) {
        if (doubleNext) {
            i *= 2;
            if (i > 9) {
                i -= 9;
            }
        }
        sum += i;
        doubleNext = !doubleNext;
    }

    return sum;
}
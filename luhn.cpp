int luhn(vector<int> digits) {
    int sum = 0;
    bool alternate = false;
    for (int i = 15; i >= 0; --i) {
        if ((alternate && (digits[i] * 2) > 9)) {
            sum += (digits[i] * 2) - 9;
        } else if (alternate) {
            sum += digits[i];
        } else {
            sum += digits[i];
        }
        alternate = !alternate;
    }
    return sum;
}
int luhn(vector<int> num) {
    int sum = 0;
    bool alternate = false;

    for (int i = num.size() - 1; i >= 0; --i) {
        if (alternate) {
            int digit = num[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += num[i];
        }

        alternate = !alternate;
    }

    return sum;
}
int luhn(const vector<int>& card_number) {
    int sum = 0;
    bool double_next = false;

    for (int i = card_number.size() - 1; i >= 0; --i) {
        int digit = card_number[i];
        if (double_next) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        double_next = !double_next;
    }

    return sum;
}
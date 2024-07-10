int luhn(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); ++i) {
        if ((i % 2 == 1)) {
            int double_digit = digits[i] * 2;
            if (double_digit > 9) {
                double_digit -= 9;
            }
            sum += double_digit;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}
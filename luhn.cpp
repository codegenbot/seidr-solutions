int luhn(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((digits.size() - i - 1) % 2 == 0) {
            int temp = digits[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}
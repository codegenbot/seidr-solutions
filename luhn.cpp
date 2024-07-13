int luhn(vector<int> digits) {
    int sum = 0;
    bool isDouble = false;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if (isDouble) {
            int temp = digits[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += digits[i];
        }
        isDouble = !isDouble;
    }
    return sum;
}
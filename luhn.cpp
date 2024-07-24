int luhn(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2) == 1) { // double every other digit starting with the second digit
            int doubled = digits[i] * 2;
            if (doubled > 9) { // if any of the results are over 9, subtract 9 from them
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        } else {
            sum += digits[i];
        }
    }
    return sum;
}
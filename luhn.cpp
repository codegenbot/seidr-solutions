int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2) == 1) { // double every other digit starting with the second digit
            int temp = digits[i] * 2;
            if (temp > 9) { // if any of the results are over 9, subtract 9 from them
                sum += temp - 9;
            } else {
                sum += temp;
            }
        } else {
            sum += digits[i];
        }
    }
    return sum;
}
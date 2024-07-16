int luhn(vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 1)) { // If it's an odd index, double the digit
            int doubledDigit = digits[i] * 2;
            if (doubledDigit > 9) { // If the result is over 9, subtract 9 from it
                doubledDigit -= 9;
            }
        } else {
            doubledDigit = digits[i];
        }
        sum += doubledDigit; // Add the new digit to the sum
    }
    return sum;
}
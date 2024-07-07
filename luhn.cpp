int luhnCheck(vector<int> digits) {
    int sum = digits[0] * 2;
    for(int i = 1; i < digits.size(); i++) {
        if(i % 2 == 1) {
            int doubleDigit = digits[i] * 2;
            if(doubleDigit > 9) {
                doubleDigit -= 9;
            }
            sum += doubleDigit;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}
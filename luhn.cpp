int luhn(vector<int> digits) {
    int sum = 0;
    for(int i = 0; i < digits.size(); i++) {
        if(i % 2 == 1) {
            digits[i] *= 2;
            if(digits[i] > 9) {
                digits[i] -= 9;
            }
        }
        sum += digits[i];
    }
    return sum;
}
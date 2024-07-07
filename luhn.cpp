int luhnCheck(vector<int> digits) {
    int sum = 0;
    bool doubleNext = true; 
    for(int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if(doubleNext) {
            digit *= 2;
            if(digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        doubleNext = !doubleNext; 
    }
    return (sum % 10 == 0);
}
int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleNext = false; 
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if (doubleNext) { 
            digit *= 2; 
            if (digit > 9) {
                sum += digit - 9; 
            } else {
                sum += digit;
            }
        } else {
            sum += digit;
        }
        doubleNext = !doubleNext; 
    }
    return sum;
}
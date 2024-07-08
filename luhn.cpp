int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = 0; i < digits.size(); ++i) {
        int digit = digits[i];
        if (!doubleNext) { 
            sum += digit;
        } else { // it's time to double the next digit
            int doubledDigit = digit * 2;
            if (doubledDigit > 9) doubledDigit -= 9;            
            sum += doubledDigit;            
        }
        doubleNext = !doubleNext; 
    }
    return sum % 10;
}
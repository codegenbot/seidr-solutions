int luhn(int n) {
    int sum = 0;
    bool addDigit = false;
    
    for (int i = 0; i < 16; ++i) {
        int digit = n % 10;
        n /= 10;
        
        if (addDigit) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        
        sum += digit;
        addDigit = !addDigit;
    }
    
    return sum;
}
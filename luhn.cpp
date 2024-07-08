int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); ++i) {
        int digit = digits[digits.size() - i - 1]; 
        if ((i % 2 != 0)) { 
            digit *= 2;
            if (digit > 9) digit -= 9;            
        }
        sum += digit;        
    }
    return sum % 10; 
}
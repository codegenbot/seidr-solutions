int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); ++i) {
        if (i % 2 == 0) { 
            int digit = (digits[i] * 2) % 10;
            if (digit >= 9) digit -= 9; 
            sum += digit;
        } else
            sum += digits[i]; 
    }
    return sum;
}
int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if ((i % 2 == 1)) { 
            digit *= 2;   
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
    }

    return sum;
}
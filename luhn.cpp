int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = 0; i < digits.size(); ++i) {
        int digit = digits[i];
        if (!doubleNext) { 
            sum += digit;
        } else { // it's time to double the next digit
            digit *= 2;
            if (digit > 9) digit -= 9;
            sum += digit;            
        }
        doubleNext = !doubleNext; // toggle for the next iteration
    }
    return sum % 10; // return the remainder of the sum divided by 10, which should be 0 for a valid card number
}
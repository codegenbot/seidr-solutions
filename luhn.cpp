int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        
        int added = digit;
        if (added > 9) {
            added -= 9;
        }
        sum += added;
        doubleNext = !doubleNext;
    }
    
    return sum;
}
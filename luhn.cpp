int luhn(const vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = 1; i < digits.size(); i++) {
        if ((i % 2) == 0) {
            int doubled = doubleNext ? (digits[i] * 2) : digits[i];
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        } else {
            sum += digits[i - 1];
        }
        doubleNext = !doubleNext;
    }
    
    return sum;
}
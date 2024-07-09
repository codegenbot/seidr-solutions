int luhn(const vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = 0; i < digits.size(); i++) {
        if (i % 2 == 1) { 
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        } else if (i != 0) {
            sum += digits[i];
        }
    }
    
    return sum;
}
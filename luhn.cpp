int luhn(const vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = digits.size() - 1; i >= 0; i--) {
        if (doubleNext) {
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
            doubleNext = false;
        } else {
            sum += digits[i];
            doubleNext = !doubleNext;
        }
    }

    return sum % 10; 
}
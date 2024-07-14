int luhn(const std::vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if (doubleNext) {
            int doubledDigit = digits[i] * 2;
            if (doubledDigit > 9)
                doubledDigit -= 9;
            sum += doubledDigit;
        } else {
            sum += digits[i];
        }
        doubleNext = !doubleNext; 
    }
    return sum;
}
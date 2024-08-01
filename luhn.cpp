int luhn(vector<int>& v) {
    int sum = 0;
    bool doubleDigit = false;

    for(int i = v.size() - 1; i >= 0; --i) {
        if(doubleDigit) {
            int digit = v[i] * 2;
            if(digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += v[i];
        }

        doubleDigit = !doubleDigit;
    }

    return sum;
}
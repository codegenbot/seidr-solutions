string circular_shift(int x, int shift) {
    string digits = to_string(x);
    int numDigits = digits.length();
    
    if (shift > numDigits) {
        reverse(digits.begin(), digits.end());
        return digits;
    }
    
    shift = shift % numDigits;
    string shiftedDigits = digits.substr(numDigits - shift) + digits.substr(0, numDigits - shift);
    return shiftedDigits;
}
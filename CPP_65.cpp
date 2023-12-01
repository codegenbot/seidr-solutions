string circular_shift(int x, int shift) {
    string digits = to_string(x);
    int numDigits = digits.length();

    if (shift > numDigits) {
        reverse(digits.begin(), digits.end());
        return digits;
    } else {
        shift %= numDigits;
        rotate(digits.begin(), digits.begin() + (numDigits - shift), digits.end());
        return digits;
    }
}
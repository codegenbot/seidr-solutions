int luhn(const std::vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;

    for (const auto& digit : digits) {
        if (doubleNext) {
            int doubledDigit = digit * 2;
            if (doubledDigit > 9) {
                sum += doubledDigit - 9;
            } else {
                sum += doubledDigit;
            }
            doubleNext = false;
        } else {
            sum += digit;
            doubleNext = !doubleNext;
        }
    }

    return sum;
}
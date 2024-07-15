double num = stod(value);
    int intPart = static_cast<int>(num);
    double decimalPart = num - intPart;
    if (decimalPart < 0.5) {
        return intPart;
    } else {
        if (num > 0) {
            return intPart + 1;
        } else {
            return intPart - 1;
        }
    }
}
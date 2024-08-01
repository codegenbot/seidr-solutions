double num = stod(value);
    int intPart = (int)num;
    double decimalPart = num - intPart;
    if (decimalPart < 0.5) {
        return floor(num);
    } else {
        if (num > 0) {
            return ceil(num);
        } else {
            return floor(num);
        }
    }
}
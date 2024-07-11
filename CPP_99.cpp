double num = stod(value);
    int intPart = static_cast<int>(num);
    double decimalPart = num - intPart;
    
    if (decimalPart < 0.5) {
        return static_cast<int>(round(num));
    } else if (num > 0) {
        return static_cast<int>(ceil(num));
    } else {
        return static_cast<int>(floor(num));
    }
}
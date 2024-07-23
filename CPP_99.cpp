double number = stod(value);
    int integerPart = (int)number;
    if (number - integerPart >= 0.5) {
        return ceil(number);
    } else if (number - integerPart <= -0.5) {
        return floor(number);
    } else {
        return (number > 0) ? ceil(number) : floor(number);
    }
}
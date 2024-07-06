int closest_integer(string value) {
    double num = stod(value);
    int integerPart = (int)num;
    if (abs(num - integerPart) < 0.5) {
        return round(num);
    } else {
        return integerPart;
    }
}
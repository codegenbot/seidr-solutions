int closest_integer(std::string value) {
    double num = stod(value);
    int integerPart = (int)num;
    if (abs(num - integerPart) >= 0.5) {
        return (num > 0) ? ceil(num) : floor(num);
    } else {
        return integerPart;
    }
}
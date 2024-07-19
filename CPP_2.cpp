float truncate_number(float number) {
    int integerPart = (int)number;
    return number - float(integerPart);
}
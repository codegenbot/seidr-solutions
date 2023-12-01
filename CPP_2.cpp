float truncate_number(float number){
    int integerPart = floor(number);
    float decimalPart = number - integerPart;
    return decimalPart;
}
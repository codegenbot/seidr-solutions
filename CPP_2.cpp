float truncate_number(float number){
    float integerPart = floor(number);
    float decimalPart = number - integerPart;
    return decimalPart;
}
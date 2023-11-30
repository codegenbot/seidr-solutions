float truncate_number(float number){
    // get the integer part of the number
    int integerPart = (int)number;

    // get the decimal part of the number
    float decimalPart = number - integerPart;

    return decimalPart;
}
float truncate_number(float number){
    int integerPart = (int)number; // cast float to int to get the integer part
    float decimalPart = number - integerPart; // subtract the integer part from the original number to get the decimal part
    return decimalPart;
}
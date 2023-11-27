float truncate_number(float number){
    int integerPart = (int)number; // convert number to integer
    float decimalPart = number - integerPart; // subtract integer part from number to get decimal part
    return decimalPart;
}
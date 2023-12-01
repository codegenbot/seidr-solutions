float truncate_number(float number){
    float integerPart;
    float decimalPart;
    
    integerPart = floor(number);
    decimalPart = number - integerPart;
    
    return decimalPart;
}
float truncate_number(float number){
    // Calculate the integer part of the number
    int intPart = floor(number);
    
    // Calculate the decimal part of the number
    float decimalPart = number - intPart;
    
    return decimalPart;
}
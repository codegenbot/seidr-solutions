float truncate_number(float number){
    int integer_part = (int)number;
    float decimal_part = number - integer_part;
    return decimal_part;
}
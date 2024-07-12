int closest_integer(string value){
    double num = stod(value);
    int integer = (num > 0) ? ceil(num) : floor(num);
    return integer;
}
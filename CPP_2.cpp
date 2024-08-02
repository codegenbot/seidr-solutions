float truncate_number(float number) {
    int integer_part = (int)number;
    return number - float(integer_part);
}
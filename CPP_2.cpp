float truncate_number(float number) {
    return modf(number, &number);
}
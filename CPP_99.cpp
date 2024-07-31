double number = stod(value);
    int lower = floor(number);
    int upper = ceil(number);
    return (number - lower < upper - number) ? lower : upper;
}
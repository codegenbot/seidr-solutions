float num = stof(value);
    int lower = floor(num);
    int upper = ceil(num);
    return abs(num - lower) < abs(num - upper) ? lower : upper;
}
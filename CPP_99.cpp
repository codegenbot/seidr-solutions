float num = stof(value);
    int lower = floor(num);
    int higher = ceil(num);
    return abs(num - lower) < abs(num - higher) ? lower : higher;
}
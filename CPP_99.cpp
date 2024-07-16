double num = stod(value);
    int closest = num < 0 ? floor(num) : ceil(num);
    return abs(num - closest) < 0.5 ? closest : (int)round(num);
}
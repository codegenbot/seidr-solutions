float num = stof(value);
    int lower = floor(num);
    int upper = ceil(num);

    if (abs(num - lower) < abs(num - upper)) {
        return lower;
    } else {
        return upper;
    }
}
float num = stof(value);
    int lower = floor(num);
    int higher = ceil(num);
    if (abs(num - lower) < abs(num - higher)) {
        return lower;
    } else {
        return higher;
    }
}
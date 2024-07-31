double num = stod(value);
    int lower = floor(num);
    int upper = ceil(num);
    
    if (num - lower < upper - num) {
        return lower;
    } else {
        return upper;
    }
}
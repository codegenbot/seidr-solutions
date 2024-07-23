double val = stod(value);
    int lower = floor(val);
    int upper = ceil(val);
    
    if (val - lower < upper - val) {
        return lower;
    } else {
        return upper;
    }
}
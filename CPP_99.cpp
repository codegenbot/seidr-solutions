double num = stod(value);
    int intNum = (int)round(num);
    if (num - intNum < 0) {
        return (int)ceil(num);
    } else {
        return (int)floor(num);
    }
}
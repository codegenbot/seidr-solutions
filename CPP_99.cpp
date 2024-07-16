double num = stod(value);
    int intPart = static_cast<int>(num);
    if (num - intPart >= 0.5) {
        return ceil(num);
    } else if (num - intPart <= -0.5) {
        return floor(num);
    } else {
        return (num > 0) ? ceil(num) : floor(num);
    }
}
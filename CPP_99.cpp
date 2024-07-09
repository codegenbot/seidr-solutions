double num = stod(value);
    int intNum = static_cast<int>(num);
    if (num - intNum >= 0.5) {
        return ceil(num);
    } else if (num - intNum <= -0.5) {
        return floor(num);
    } else {
        if (num >= 0) {
            return ceil(num);
        } else {
            return floor(num);
        }
    }
}
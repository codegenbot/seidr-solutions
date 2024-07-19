double num = stod(value);
    int intNum = round(num);
    if (num - intNum > 0.5) {
        return ceil(num);
    } else if (num - intNum < -0.5) {
        return floor(num);
    } else {
        if (num >= 0) {
            return ceil(num);
        } else {
            return floor(num);
        }
    }
}
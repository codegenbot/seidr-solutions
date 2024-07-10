float num = stof(value);
    int intNum = round(num);
    if (num - intNum > 0) {
        return ceil(num);
    } else {
        return floor(num);
    }
}
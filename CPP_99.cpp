double num = stod(value);
    int roundedNum = round(num);
    if (num - roundedNum > 0) {
        return ceil(num);
    } else {
        return floor(num);
    }
}
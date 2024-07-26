double num = stod(value);
    if (num < 0) {
        return ceil(num - 0.5);
    } else {
        return floor(num + 0.5);
    }
}
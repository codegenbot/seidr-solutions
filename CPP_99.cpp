double num = stod(value);
if (num < 0) {
    return floor(num + 0.5);
} else {
    return ceil(num - 0.5);
}
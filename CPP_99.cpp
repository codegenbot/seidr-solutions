double num = stod(value);
    int rounded = round(num);
    if (num - rounded > 0.5) {
        return ceil(num);
    } else if (num - rounded < -0.5) {
        return floor(num);
    } else {
        return rounded;
    }
}
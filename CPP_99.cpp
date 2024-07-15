double num = stod(value);
    int rounded = round(num);
    if (num - floor(num) == 0.5) {
        return (num > 0) ? ceil(num) : floor(num);
    }
    return rounded;
}
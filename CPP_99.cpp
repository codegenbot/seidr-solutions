double num = stod(value);
    int int_num = static_cast<int>(round(num));
    if (num - int_num > 0.5) {
        return ceil(num);
    } else if (num - int_num < -0.5) {
        return floor(num);
    } else {
        return (num > 0) ? ceil(num) : floor(num);
    }
}
double num = stod(value);
    int integer_part = static_cast<int>(num);
    if (num - integer_part >= 0.5) {
        return ceil(num);
    } else if (num - integer_part <= -0.5) {
        return floor(num);
    } else {
        return num > 0 ? ceil(num) : floor(num);
    }
}
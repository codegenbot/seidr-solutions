double num = stod(value);
    int rounded = round(num);
    if (num - rounded == 0.5) {
        return static_cast<int>(num > 0 ? ceil(num) : floor(num));
    }
    return static_cast<int>(round(num));
}
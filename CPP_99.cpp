float num = stof(value);
    int integerPart = round(num);
    if (num - integerPart == 0.5) {
        return num > 0 ? ceil(num) : floor(num);
    }
    return round(num);
}
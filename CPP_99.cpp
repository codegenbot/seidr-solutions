double num = stod(value);
    int intNum = round(num);
    return num - intNum > 0 ? ceil(num) : floor(num);
}
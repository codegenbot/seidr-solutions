double num = stod(value);
    int intNum = round(num);
    if (num - intNum == 0.5) {
        return num > 0 ? ceil(num) : floor(num);
    }
    return intNum;
}
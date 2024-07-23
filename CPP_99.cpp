double num = stod(value);
    int intNum = round(num);
    if (num - intNum < 0) {
        intNum = floor(num);
    }
    return intNum;
}
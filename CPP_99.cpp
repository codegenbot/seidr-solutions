double num = stod(value);
    int roundedNum = round(num);
    if (num - roundedNum == 0.5) {
        return (num > 0) ? ceil(num) : floor(num);
    }
    return roundedNum;
}
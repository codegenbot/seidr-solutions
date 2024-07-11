double num = stod(value);
    int roundedNum = round(num);
    if (abs(num - roundedNum) < 0.5) {
        return roundedNum;
    } else {
        return num > 0 ? ceil(num) : floor(num);
    }
}
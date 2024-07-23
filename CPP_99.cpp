double num = stod(value);
    int roundedNum = round(num);
    return (num - roundedNum > 0) ? ceil(num) : floor(num);
}
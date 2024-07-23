double num = stod(value);
    int roundedNum = (int)round(num);
    return (num - roundedNum >= 0.5) ? ceil(num) : floor(num);
}
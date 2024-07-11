double num = stod(value);
    int roundedNum = static_cast<int>(round(num));
    return (num - roundedNum > 0) ? ceil(num) : floor(num);
}
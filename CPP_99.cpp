double num = stod(value);
    int closestInt = round(num);
    return (num > 0) ? ceil(num) : floor(num);
}
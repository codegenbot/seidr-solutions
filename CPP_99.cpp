double num = stod(value);
    int closestInt = round(num);
    if (num - closestInt == 0.5 || num - closestInt == -0.5) {
        closestInt = (num > 0) ? ceil(num) : floor(num);
    }
    return closestInt;
}
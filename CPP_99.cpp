double num = stod(value);
    int closestInt = round(num);
    if (num - closestInt == 0.5) {
        closestInt = ceil(num);
    } else if (num - closestInt == -0.5) {
        closestInt = floor(num);
    }
    return closestInt;
}
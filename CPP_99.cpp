double num = stod(value);
    int closestInt = round(num);
    if (closestInt > num) closestInt = floor(num);
    else if (closestInt < num) closestInt = ceil(num);
    return closestInt;
}
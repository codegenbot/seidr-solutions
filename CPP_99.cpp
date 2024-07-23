double number = stod(value);
    int closestInt = (int)(number >= 0 ? floor(number + 0.5) : ceil(number - 0.5));
    return closestInt;
}
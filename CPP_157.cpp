float sides[3] = {a, b, c};
    sort(sides, sides + 3);
    if (pow(sides[0], 2) + pow(sides[1], 2) == pow(sides[2], 2))
        return true;
    return false;
}
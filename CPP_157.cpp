float sides[3] = {a, b, c};
    sort(sides, sides + 3);
    return (pow(sides[0], 2) + pow(sides[1], 2) == pow(sides[2], 2));
}
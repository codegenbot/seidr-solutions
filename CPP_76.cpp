if (x < 1 || n < 2) return false;
    int power = round(log(x) / log(n));
    return pow(n, power) == x;
}